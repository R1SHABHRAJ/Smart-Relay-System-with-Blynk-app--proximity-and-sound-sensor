# Smart Relay System with Blynk App Integration
This project demonstrates a smart relay system that can be controlled using the Blynk mobile app. The relay can be operated based on inputs from a proximity sensor (infrared sensor) and a clap (sound sensor). The ESP8266 microcontroller is used to interface with the sensors and connect to the Blynk server.


Smart Relay System with Blynk App Integration
This project demonstrates a smart relay system that can be controlled using the Blynk mobile app. The relay can be operated based on inputs from a proximity sensor (infrared sensor) and a clap (sound sensor). The ESP8266 microcontroller is used to interface with the sensors and connect to the Blynk server.

## Features
Control the relay using the Blynk mobile app.
Automatic operation based on the proximity sensor (infrared sensor).
Manual control based on sound input (clap) using a sound sensor.

## Hardware Components
ESP8266 microcontroller.
Proximity sensor (Infrared sensor).
Sound sensor (Clap sensor).
Relay module.

## Blynk Setup
Install the Blynk app on your mobile device.
Create a new project and obtain the authentication token.
Update the auth variable in the Arduino code with the obtained token.

## Wiring
Connect the proximity sensor to pin D5 (IR).
Connect the sound sensor to pin D6.
Connect the relay control pin to pin D4 (relayPin).
Connect the relay module to pin D7 (relay).

## Usage
Upload the Arduino code to the ESP8266.
Open the Serial Monitor to view debug messages.
Power up the circuit and control the relay using the Blynk app.
Observe automatic operation based on the proximity and sound sensors.