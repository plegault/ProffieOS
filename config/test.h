#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SERIAL
// Max 20 characters
#define BLE_PASSWORD "12345"
// Max 32 characters.
#define BLE_NAME "hex color"
// Max 9 characters
#define BLE_SHORTNAME "hex"
#define SAVE_PRESET

#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<Pink, RED, 300, 800>(), "cyan"},
   { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
   { "SmthGrey", "tracks/mercury.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},
   { "SmthFuzz", "tracks/uranus.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
   { "RgueCmdr", "tracks/venus.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},
   { "TthCrstl", "tracks/mars.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
   { "TeensySF", "tracks/mercury.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
   { "SmthJedi", "tracks/uranus.wav",
    StylePtr<ColorSequence<500,Red,Green,Blue,AMBER,WHITE,UV>>(), "demo color"}
};
BladeConfig blades[] = {
 { 0, SimpleBladePtr<hexred, hexblue, hexgreen, hexamber, hexwhite, hexuv, bladePowerPin1, bladePowerPin2, bladePowerPin3, bladePowerPin4, bladePowerPin5, bladePowerPin6>(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
InvertedLatchingButton PowerButton(BUTTON_POWER, powerButtonPin, "pow");
#endif
