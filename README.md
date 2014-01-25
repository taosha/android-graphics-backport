#android-camera-backport-ndk
Camera.setLocation() for pre-android-9 sdks

## Build
This is an android library project, to build it, `cd` to the project directory, run `ndk-build && ant release`.

## Usage
Copy the generated `classes.jar` file under `bin` and `so` files under `libs`(with directory structure) into your android application project's `libs` directory.     
Use `com.zhcnxf.android.backports.graphics.Camera` the way you use `android.graphics.Camera`.
