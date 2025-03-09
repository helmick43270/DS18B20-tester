//
// FILE: TwoPin_DS18B20.ino
// AUTHOR: Rob Tillaart
// VERSION: 0.1.00
// PURPOSE: two pins for two sensors demo
// DATE: 2014-06-13
// URL: http://forum.arduino.cc/index.php?topic=216835.msg1764333#msg1764333
//
// Released to the public domain
//

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS_1 0
#define ONE_WIRE_BUS_2 2
#define ONE_WIRE_BUS_3 4

OneWire oneWire_one(ONE_WIRE_BUS_1);
OneWire oneWire_two(ONE_WIRE_BUS_2);
OneWire oneWire_three(ONE_WIRE_BUS_3);

DallasTemperature sensor_numberone(&oneWire_one);
DallasTemperature sensor_numbertwo(&oneWire_two);
DallasTemperature sensor_numberthree(&oneWire_three);

void setup(void)
{
  Serial.begin(115200);
  Serial.println("Dallas Temperature Control Library Demo - TwoPin_DS18B20");

  sensor_numberone.begin();
  sensor_numbertwo.begin();
  sensor_numberthree.begin();
}

void loop(void)
{
  Serial.print("Requesting temperatures...");
  sensor_numberone.requestTemperatures();
  sensor_numbertwo.requestTemperatures();
  sensor_numberthree.requestTemperatures();
  Serial.println(" done");

  Serial.print("Number One: ");
  Serial.println(sensor_numberone.getTempCByIndex(0));

  Serial.print("Number Two: ");
  Serial.println(sensor_numbertwo.getTempCByIndex(0));

  Serial.print("Number Three: ");
  Serial.println(sensor_numberthree.getTempCByIndex(0));
}
