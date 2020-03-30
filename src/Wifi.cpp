#include "Wifi.h"
#include "config.h"
#include "html.h"

#ifndef serverObject
#include <ESP8266WebServer.h>
ESP8266WebServer serverObject(serverPort);
#endif

bool Wifi::setupWifi() {
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        Serial.println("Waiting for connect...");
    }
    return true;
}
void respondIndexHtml() {
    serverObject.send(200, "text/html", getHtmlString());
}

void Wifi::setupRequestHandling() {
    serverObject.on("/", respondIndexHtml);
}

