// Copyright 2011 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <string>
#include "VideoCommon/VideoBackendBase.h"

class GLContext;

namespace OGL
{
class VideoBackend : public VideoBackendBase
{
  bool Initialize(const WindowSystemInfo& wsi) override;
  void Shutdown() override;

  std::string GetName() const override;
  std::string GetDisplayName() const override;

  void InitBackendInfo() override;

public:
  bool InitializeGLExtensions(GLContext* context);
  bool FillBackendInfo();
};
}  // namespace OGL
