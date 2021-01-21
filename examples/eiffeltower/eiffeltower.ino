#include <maidenhead.h>

void setup() {
  Serial.begin(115200);
  delay(100);
}

void loop() {

  char* locator=get_mh(48.85818, 2.29435,4);
  Serial.print("Eiffel tower 4 char locator is ");
  Serial.println(locator);
  Serial.print("Eiffel tower 6 char locator is ");
  Serial.println(get_mh(48.85818, 2.29435,6));
  Serial.print("Eiffel tower 10 char locator is ");
  Serial.println(get_mh(48.85818, 2.29435,10));

  locator = "JN18DU55HX";
  double lat, lon;
  Serial.print("The locator of the Eiffel tower is ");
  Serial.print(locator);
  Serial.println(".");
  lon = mh2lon(locator);
  lat = mh2lat(locator);
  Serial.print("Position of the Eiffel tower is ");
  Serial.print(lat, 5);
  Serial.print(", ");
  Serial.println(lon, 5);
  delay(10000);

}
