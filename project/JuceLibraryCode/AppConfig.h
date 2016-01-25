/*

    IMPORTANT! This file is auto-generated each time you save your
    project - if you alter its contents, your changes may be overwritten!

    There's a section below where you can add your own custom code safely, and the
    Introjucer will preserve the contents of that block, but the best way to change
    any of these definitions is by using the Introjucer's project settings.

    Any commented-out settings will assume their default values.

*/

#ifndef __JUCE_APPCONFIG_UNTEAW__
#define __JUCE_APPCONFIG_UNTEAW__

//==============================================================================
// [BEGIN_USER_CODE_SECTION]


#ifndef ELEMENT_VERSION_STRING
 // This is for systems that don't use Waf to build the project
 #define ELEMENT_VERSION_STRING ProjectInfo::versionString
#endif

// [END_USER_CODE_SECTION]

//==============================================================================
#define JUCE_MODULE_AVAILABLE_element_base               1
#define JUCE_MODULE_AVAILABLE_element_engines            1
#define JUCE_MODULE_AVAILABLE_element_gui                1
#define JUCE_MODULE_AVAILABLE_element_lv2                1
#define JUCE_MODULE_AVAILABLE_element_models             1
#define JUCE_MODULE_AVAILABLE_juce_audio_basics          1
#define JUCE_MODULE_AVAILABLE_juce_audio_devices         1
#define JUCE_MODULE_AVAILABLE_juce_audio_formats         1
#define JUCE_MODULE_AVAILABLE_juce_audio_processors      1
#define JUCE_MODULE_AVAILABLE_juce_audio_utils           1
#define JUCE_MODULE_AVAILABLE_juce_core                  1
#define JUCE_MODULE_AVAILABLE_juce_cryptography          1
#define JUCE_MODULE_AVAILABLE_juce_data_structures       1
#define JUCE_MODULE_AVAILABLE_juce_events                1
#define JUCE_MODULE_AVAILABLE_juce_graphics              1
#define JUCE_MODULE_AVAILABLE_juce_gui_basics            1
#define JUCE_MODULE_AVAILABLE_juce_gui_extra             1
#define JUCE_MODULE_AVAILABLE_juce_opengl                1

//==============================================================================
#ifndef    JUCE_STANDALONE_APPLICATION
 #define   JUCE_STANDALONE_APPLICATION 1
#endif

//==============================================================================
// element_engines flags:

#ifndef    ELEMENT_LV2_PLUGIN_HOST
 #define   ELEMENT_LV2_PLUGIN_HOST 0
#endif

//==============================================================================
// element_lv2 flags:

#ifndef    ELEMENT_LV2_PLUGIN_HOST
 #define   ELEMENT_LV2_PLUGIN_HOST 0
#endif

//==============================================================================
// juce_audio_devices flags:

#ifndef    JUCE_ASIO
 #define   JUCE_ASIO 0
#endif

#ifndef    JUCE_WASAPI
 #define   JUCE_WASAPI 0
#endif

#ifndef    JUCE_WASAPI_EXCLUSIVE
 //#define JUCE_WASAPI_EXCLUSIVE
#endif

#ifndef    JUCE_DIRECTSOUND
 #define   JUCE_DIRECTSOUND 0
#endif

#ifndef    JUCE_ALSA
 #define   JUCE_ALSA 1
#endif

#ifndef    JUCE_JACK
 #define   JUCE_JACK 0
#endif

#ifndef    JUCE_USE_ANDROID_OPENSLES
 #define   JUCE_USE_ANDROID_OPENSLES 0
#endif

#ifndef    JUCE_USE_CDREADER
 #define   JUCE_USE_CDREADER 0
#endif

#ifndef    JUCE_USE_CDBURNER
 #define   JUCE_USE_CDBURNER 0
#endif

//==============================================================================
// juce_audio_formats flags:

#ifndef    JUCE_USE_FLAC
 //#define JUCE_USE_FLAC
#endif

#ifndef    JUCE_USE_OGGVORBIS
 //#define JUCE_USE_OGGVORBIS
#endif

#ifndef    JUCE_USE_MP3AUDIOFORMAT
 //#define JUCE_USE_MP3AUDIOFORMAT
#endif

#ifndef    JUCE_USE_LAME_AUDIO_FORMAT
 //#define JUCE_USE_LAME_AUDIO_FORMAT
#endif

#ifndef    JUCE_USE_WINDOWS_MEDIA_FORMAT
 //#define JUCE_USE_WINDOWS_MEDIA_FORMAT
#endif

//==============================================================================
// juce_audio_processors flags:

#ifndef    JUCE_PLUGINHOST_VST
 //#define JUCE_PLUGINHOST_VST
#endif

#ifndef    JUCE_PLUGINHOST_VST3
 //#define JUCE_PLUGINHOST_VST3
#endif

#ifndef    JUCE_PLUGINHOST_AU
 #define   JUCE_PLUGINHOST_AU 1
#endif

//==============================================================================
// juce_core flags:

#ifndef    JUCE_FORCE_DEBUG
 #define   JUCE_FORCE_DEBUG 0
#endif

#ifndef    JUCE_LOG_ASSERTIONS
 #define   JUCE_LOG_ASSERTIONS 0
#endif

#ifndef    JUCE_CHECK_MEMORY_LEAKS
 #define   JUCE_CHECK_MEMORY_LEAKS 0
#endif

#ifndef    JUCE_DONT_AUTOLINK_TO_WIN32_LIBRARIES
 //#define JUCE_DONT_AUTOLINK_TO_WIN32_LIBRARIES
#endif

#ifndef    JUCE_INCLUDE_ZLIB_CODE
 //#define JUCE_INCLUDE_ZLIB_CODE
#endif

#ifndef    JUCE_USE_CURL
 //#define JUCE_USE_CURL
#endif

//==============================================================================
// juce_graphics flags:

#ifndef    JUCE_USE_COREIMAGE_LOADER
 //#define JUCE_USE_COREIMAGE_LOADER
#endif

#ifndef    JUCE_USE_DIRECTWRITE
 //#define JUCE_USE_DIRECTWRITE
#endif

//==============================================================================
// juce_gui_basics flags:

#ifndef    JUCE_ENABLE_REPAINT_DEBUGGING
 //#define JUCE_ENABLE_REPAINT_DEBUGGING
#endif

#ifndef    JUCE_USE_XSHM
 //#define JUCE_USE_XSHM
#endif

#ifndef    JUCE_USE_XRENDER
 //#define JUCE_USE_XRENDER
#endif

#ifndef    JUCE_USE_XCURSOR
 //#define JUCE_USE_XCURSOR
#endif

//==============================================================================
// juce_gui_extra flags:

#ifndef    JUCE_WEB_BROWSER
 //#define JUCE_WEB_BROWSER
#endif

#ifndef    JUCE_ENABLE_LIVE_CONSTANT_EDITOR
 //#define JUCE_ENABLE_LIVE_CONSTANT_EDITOR
#endif


#endif  // __JUCE_APPCONFIG_UNTEAW__
