#ifndef ARDUINO
// Prevent Arduino IDE from compiling this file

#include <stdio.h>
#include "maidenhead.h"

int main() {
  char* locator = "JN18DU55HW";
  double lat, lon;
  printf("The locator of the Eiffel tower is %s.\n", locator);
  lon = mh2lon(locator);
  lat = mh2lat(locator);
  printf("The latitude of the Eiffel tower is %f, and its longitude is %f\n", lat, lon);
  return 0;
}

#endif
