# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License.

add_executable(godot_juan_mosaic "godot_juan_mosaic.cpp")
target_include_directories(godot_juan_mosaic PRIVATE include include\onnxruntime\core\session include\onnxruntime\core\providers)
target_link_libraries(godot_juan_mosaic PRIVATE ${PROJECT_SOURCE_DIR}/onnxruntime ${PROJECT_SOURCE_DIR}/libpng16)
if(PNG_LIBDIR)
  target_link_directories(godot_juan_mosaic PRIVATE .)
endif()
