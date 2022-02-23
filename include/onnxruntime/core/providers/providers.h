// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <memory>

namespace onnxruntime {
class IExecutionProvider;

struct IExecutionProviderFactory {
  virtual ~IExecutionProviderFactory() = default;
  virtual std::unique_ptr<IExecutionProvider> CreateProvider() = 0;
};
}  // namespace onnxruntime
