#include "ESP8266WiFi.h"

WiFiServer server(10);

// Right
const int RF = 5;
const int RB = 16;
// Left
const int LF = 4;
const int LB = 0;

// Wireless network settings
const char *ssid = "Lumina";
const char *password = "15321532";
const int port = 10;

void loop() {
    WiFiClient client = server.available();
    if (client) { //Si hay un cliente presente
        Serial.println("Novo Cliente");
        while (!client.available() && client.connected()) { //esperamos hasta que hayan datos disponibles
            delay(1);
        }
        String linea1 = client.readStringUntil('r');// Leemos la primera línea de la petición del cliente.
        Serial.print("Endpoint Acessado: ");
        Serial.println(linea1);

        if (linea1.indexOf("FRENTE") > 0) {
            digitalWrite(RF, HIGH);
            digitalWrite(RB, LOW);
            digitalWrite(LF, HIGH);
            digitalWrite(LB, LOW);
        }
        if (linea1.indexOf("RE") > 0) {
            digitalWrite(RF, LOW);
            digitalWrite(RB, HIGH);
            digitalWrite(LF, LOW);
            digitalWrite(LB, HIGH);
        }
        if (linea1.indexOf("DIREITA") > 0) {
            digitalWrite(RF, LOW);
            digitalWrite(RB, HIGH);
            digitalWrite(LF, HIGH);
            digitalWrite(LB, LOW);
        }
        if (linea1.indexOf("ESQUERDA") > 0) {
            digitalWrite(RF, HIGH);
            digitalWrite(RB, LOW);
            digitalWrite(LF, LOW);
            digitalWrite(LB, HIGH);
        }
        if (linea1.indexOf("PARAR") > 0) {
            digitalWrite(RF, LOW);
            digitalWrite(RB, LOW);
            digitalWrite(LF, LOW);
            digitalWrite(LB, LOW);
        }

        client.flush();
        const char *html = "HTTP/1.1 200 OK"
                           "\nContent-Type: text/html"
                           "\nConnection: close"
                           "\n"
                           "\n<!DOCTYPE HTML>"
                           "\n<html>"
                           "\n<head><title>Lumina Spargere</title>"
                           "\n<meta name='viewport' content='width=device-width, initial-scale=1.0'>"
                           "\n"
                           "\n<style>button{background-color:#f44336border:nonecolor:whitepadding:15px 32pxtext-align:centertext-decoration:nonedisplay:inline-blockfont-size: 24px transition-duration: 0.4s}button:hover{background-color: #4CAF50  color: white}</style>"
                           "\n</head>"
                           "\n<body>"
                           "\n<div style='text-align:center'>"
                           "\n<h1 align='center'>Lumina Spargere</h1>"
                           "\n<br />"
                           "\n<button onClick=location.href='./?FRENTE'>FRENTE</button><br>"
                           "\n<button onClick=location.href='./?RE'>RE</button><br>"
                           "\n<button onClick=location.href='./?DIREITA'>DIREITA</button><br>"
                           "\n<button onClick=location.href='./?ESQUERDA'>ESQUERDA</button><br>"
                           "\n<button onClick=location.href='./?PARAR'>PARAR</button>"
                           "\n<br />"
                           "\n</div>"
                           "\n</body>"
                           "\n</html>";
        client.println(html);
        Serial.println("RESPOSTA ENVIADA");
        Serial.println();
    }
}

void setup() {
    Serial.begin(9600);

    pinMode(RF, OUTPUT);
    pinMode(RB, OUTPUT);
    pinMode(LF, OUTPUT);
    pinMode(LB, OUTPUT);

    Serial.println();
    Serial.print("CONECTANDO WIFI: ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi conectado");
    server.begin();
    Serial.println("Servidor Iniciado");
    Serial.println("IP Servidor:");
    Serial.println(WiFi.localIP());
    Serial.print("Porta:");
    Serial.println(port);
}