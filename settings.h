#ifndef SETTINGS_H
#define SETTINGS_H

#define MYSSID "NETGEAR83"
#define PASSWORD ""

#define MQTT_USERNAME "emonpi"
#define MQTT_PASSWORD "emonpimqtt2016"
#define MQTT_PUB_TOPIC "EspWasherWeb"
#define MQTT_TIME_TOPIC "time"
#define APPNAME "WasherWatch"
#define NTPSERVERNAME "pool.ntp.org"
#define GMTOFFSET 3600        // In seconds
#define DAYLIGHTOFFSET 3600  // In seconds
//#define LOCALTZ "Etc/GMT-2"

//Static IP address configuration
IPAddress staticIP(192, 168, 1, 117); //ESP static ip
IPAddress gateway(192, 168, 1, 1);   //IP Address of your WiFi Router (Gateway)
IPAddress subnet(255, 255, 255, 0);  //Subnet mask
IPAddress dns(8, 8, 8, 8);  //DNS

IPAddress MQTT_SERVER(192, 168, 1, 190);


#define DHT11PIN 13

// Connections for the LCD
#define PIN_SCE   5  //CE
#define PIN_RESET 4  //RST
#define PIN_DC    12  //DC
#define PIN_SDIN  2  //Din
#define PIN_SCLK  14 //Clk

// Analog GPIO on the ESP8266.
// Pin for the current sensor, must be analog.
#define CURRENT_PIN             0

// If you are using a nude ESP8266 board it will be 1.0V, if using a NodeMCU there
// is a voltage divider in place, so use 3.3V instead.
#define REFERENCE_VOLTAGE       1.0
// Precision of the ADC measure in bits. Arduinos and ESP8266 use 10bits ADCs, but the
// ADS1115 is a 16bits ADC
#define ADC_BITS                10
// Number of decimal positions for the current output
//#define CURRENT_PRECISION       3
// This is basically the volts per amper ratio of your current measurement sensor.
// If your sensor has a voltage output it will be written in the sensor enclosure,
// something like "30V 1A", otherwise it will depend on the burden resistor you are
// using.

//#define CURRENT_RATIO           66    // based on 30ohm burden resistor and 2000 windings in SCT-013-000
// 2000/30=66,67
// Mine is 1000 windings and R is 100ohm. 1000/100=10
#define CURRENT_RATIO 10

// This version of the library only calculate aparent power, so it asumes a fixes
// mains voltage
#define MAINS_VOLTAGE           230
// Number of samples each time you measure
#define SAMPLES_X_MEASUREMENT   1000


#endif
