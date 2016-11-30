#android-graphics-backport
Camera.setLocation() for pre-android-9 sdks

## Build
`./gradlew build` or `./gradlew publishToMavenLocal`

**Note**: before building, you need a `local.properties` file in your project root directory.
```properties
sdk.dir={ANDROID_SDK_DIR}
ndk.dir={ANDROID_NDK_DIR}
```

## Using it in gradle projects
1. Run `./gradlew publishToMavenLocal` to publish this library to your maven local repository, 
2. then in your project's `build.gradle`, add dependency:
	``` groovy
	repositories {
		mavenLocal()
	}

	dependencies {
		compile "org.taosha.android:android-graphics-backport:armv7:0.1.0@aar"
	// or	compile "org.taosha.android:android-graphics-backport:x86:0.1.0@aar"
	}
	```
3. Use class `org.taosha.android.graphics.Camera` the way you use `android.graphics.Camera`.
