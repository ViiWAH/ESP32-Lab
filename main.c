#include <Arduino.h>
#include <WiFi.h>

void setup() {
    Serial.begin(115200);
    Serial.println("Hello, World!");

    // Create WiFi access point
    String ssid = generateRandomString(10); // Generate a random string of length 10
    String password = generateRandomString(10); // Generate a random string of length 10
    WiFi.softAP(ssid.c_str(), password.c_str());

    IPAddress IP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(IP);
}

struct Button {
    int lastState;
    int currentState;
};

void loop() {
    Button BUTTON_UP = Button;
    Button BUTTON_DW = Button;
    Button BUTTON_LF = Button;
    bool updateMenu = false;

    BUTTON_UP->currentState = digitalRead(BUTTON_UP)
    if(BUTTON_UP->lastState = BUTTON_UP->currentState){
        BUTTON_UP->currentState = BUTTON_UP->lastState
        // react state change for BUTTON_UP
    }
    BUTTON_DW->currentState = digitalRead(BUTTON_DW)
    if(BUTTON_DW->lastState = BUTTON_DW->currentState){
        BUTTON_DW->currentState = BUTTON_DW->lastState
        // react state change for BUTTON_DW
    }
    BUTTON_LF->currentState = digitalRead(BUTTON_LF)
    if(BUTTON_LF->lastState = BUTTON_LF->currentState){
        BUTTON_LF->currentState = BUTTON_LF->lastState
        // react state change for BUTTON_LF
    }

    if(updateMenu){
        // update menu, redraw screen
        
    }
}