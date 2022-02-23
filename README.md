# FNS Mosaic

> FNS Mosaic is a style transfer model. In this sample application, we use the ONNX Runtime C API to process an image using the FNS Mosaic model in ONNX format.

## How to run

`run.bat`

## References

https://github.com/microsoft/onnxruntime-inference-examples/blob/main/c_cxx/README.md

https://onnxruntimetestdata.blob.core.windows.net/models/libpng.zip

![Juan Mosaic](https://github.com/fire/onnx-godot-juan-mosaic/blob/main/DLvBok4XUAAnvyf_mosaic.png)
## Support matrix

 > The DirectML execution provider currently supports ONNX opset 12 (ONNX v1.7). Evaluating models which require a higher opset version is not supported, and may produce unexpected results.
    
### Use Windows ONNX Runtime with CPU or Directml.

>     CPU
>     NVIDIA Kepler (GTX 600 series) and above
>     AMD GCN 1st Gen (Radeon HD 7000 series) and above
>     Intel Haswell (4th-gen core) HD Integrated Graphics and above
>
> DirectML is compatible with Windows 10, version 1709 (10.0.16299; RS3, “Fall Creators Update”) and newer.
    
https://onnxruntime.ai/docs/execution-providers/DirectML-ExecutionProvider#install

### Build Onnx Runtime instructions

```
./build.bat --config RelWithDebInfo --build_shared_lib --parallel --use_dml --disable_rtti --disable_exceptions --enable_msvc_static_runtime --ms_experimental
```

### Build Mosaic instructions

```
mkdir build
cd build
cmake ..
REM Open visual stuido project and build release debug.
```
