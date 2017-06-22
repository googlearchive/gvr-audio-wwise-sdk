# Release Notes

## GVR Audio Wwise SDK v0.5.0
* Improved early-reflection rendering.
* Fixed a bug when Wwise is remotely connected to a game engine.
  ([issue](https://github.com/googlevr/gvr-audio-wwise-sdk/issues/6))
* Performance optimizations.

## GVR Audio Wwise SDK v0.4.0
* Fixed constant performance overhead issue when no voices are present. Plugins
  stop processing when a corresponding bus falls silent now.
  ([issue](https://github.com/googlevr/gvr-audio-wwise-sdk/issues/4))
* Fixed plugin crashes when Wwise Profiler is used within game integrations.
  ([issue](https://github.com/googlevr/gvr-audio-wwise-sdk/issues/5))
* Fixed a minor issue where the GVR Audio Room Effects plugin did not fade out
  gracefully when all the voices are stopped.
* Fixed linker issues for static libraries on Mac.

## GVR Audio Wwise SDK v0.3.0
* Improved HRTF rendering quality.
* Equalized timbre differences between different quality modes.
* Performance optimizations.
* Fixed voice starvation issues on startup.

## GVR Audio Wwise SDK v0.2.1
* Fixed Android linker errors in Unreal.
* Performance optimizations.

## GVR Audio Wwise SDK v0.2.0
* Performance optimizations.

# Known Issues

* Multiple instances of the GVR Audio Renderer and GVR Audio Room Effects
  plugins are not supported in the mixer hierarchy.
* Game engine integration is required to preview the GVR Audio Room Effects
  features.
