#include <ezButton.h>

const int dotPin = 3;
const int dashPin = 6;
const int spacePin = 9;
const int enterPin = 11;


ezButton dotButton(dotPin);
ezButton dashButton(dashPin);
ezButton spaceButton(spacePin);
ezButton enterButton(enterPin);


void setup () {

    Serial.begin(9600);

    dotButton.setDebounceTime(50);
    dashButton.setDebounceTime(50);
    spaceButton.setDebounceTime(50);
    enterButton.setDebounceTime(50);

}

void loop () {

    dotButton.loop();
    dashButton.loop();
    spaceButton.loop();
    enterButton.loop();

    if (dotButton.isPressed()) {

        Serial.println(0);

    }

    if (dashButton.isPressed()) {

        Serial.println(1);

    }

    if (spaceButton.isPressed()) {

        Serial.println(2);

    }

    if (enterButton.isPressed()) {

        Serial.println(3);

    }
}