// Copyright 2016 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS-IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef VR_AUDIO_PLATFORM_WWISE_WWISE_FX_FACTORY_H_
#define VR_AUDIO_PLATFORM_WWISE_WWISE_FX_FACTORY_H_

namespace vraudio {
namespace wwise {

// Static links for plug-in registrations.
AK_STATIC_LINK_PLUGIN(GvrAudioRendererFX)
AK_STATIC_LINK_PLUGIN(GvrAudioRoomEffectsFX)
AK_STATIC_LINK_PLUGIN(GvrAudioRoomEffectsFXAttachment)

}  // namespace wwise
}  // namespace vraudio

#endif  // VR_AUDIO_PLATFORM_WWISE_WWISE_FX_FACTORY_H_
