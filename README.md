Need to test DS18B20 temp sensors before installing into product. This is set up to test three sensors at a time on an ESP32 dev board using GPIO-Zero, Two, and Four. Pull up the GPIO lines with a 4.7k-ohm resistor. This is NOT set up for parasite power. This code is straight out of the examples in the DallasTemperature library. I expanded it to suit my purpose.  
Using GPIO-Zero was a mistake, so I will change it. Found out that one can use certain GPIO lines as normal, but only with marginally predictable results, because they have specialized functions.  
The DS18B20A file is the binary compiled for an ESP8266.
