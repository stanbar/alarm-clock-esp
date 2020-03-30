#include <Arduino.h>
#include "Wifi.h"

#ifndef serverObject
#include <ESP8266WebServer.h>
ESP8266WebServer serverObject(80);
#endif

void setup() {
  Serial.begin(9600);
  Serial.println("Started");
  Wifi wifiClient;
  if(wifiClient.setupWifi()) {
    wifiClient.setupRequestHandling();
  }
}

void loop() {

  Serial.println("123");
}