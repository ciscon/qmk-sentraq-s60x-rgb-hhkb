#pragma once

#undef BACKLIGHT_BREATHING
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#undef RGBLIGHT_ANIMATIONS
#undef MIDI_BASIC
#undef MIDI_ADVANCED
#undef AUDIO_CLICKY

#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


#undef DEBOUNCE
#define DEBOUNCE 5
#undef USB_POLLING_INTERVAL_MS
#define USB_POLLING_INTERVAL_MS 1
