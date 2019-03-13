#include "EyeUltraSound.h"

EyeUltraSound::EyeUltraSound()
{
    NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
}

EyeUltraSound::~EyeUltraSound()
{
}

float EyeUltraSound::Afstand()
{
    delay(30); // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
    float afstand = sonar.ping_cm();
    if (afstand == 0) {
        afstand = 200;
    }
    return afstand;
}
