#include <maidenhead.h>

void setup() {
  char* locator = "JN18DU55HW";
  double lat, lon;
  Serial.begin(115200);
  Serial.print("The locator of the Eiffel tower is ");
  Serial.print(locator);
  Serial.println(".");
  lon = mh2lon(locator);
  lat = mh2lat(locator);
  Serial.print("The latitude of the Eiffel tower is ");
  Serial.print(lat, 6);
  Serial.print(", and its longitude is ");
  Serial.println(lon, 6);
  Serial.flush();
}

void loop() {
}
