# maidenhead
C library for converting between latitude/longitude and Maidenhead locators.
Supports Maidenhead locators up to 10 characters long, allowing for 13-metre accuracy.

## Functions
- `get_mh` - Converts latitude/longitude to a Maidenhead locator.
- `complete_mh` - Extends a Maidenhead locator to 10 characters by adding pairs of subsequent squares in the middle of the incomplete locator.
- `mh2lon` - Converts a Maidenhead locator to longitude.
- `mh2lat` - Converts a Maidenhead locator to latitude.

## Example
```c
#include <stdio.h>
#include <maidenhead.h>

int main() {
  char* locator = "JN18DU55HW";
  double lat, lon;
  printf("The locator of the Eiffel tower is %s.\n", locator);
  lon = mh2lon(locator);
  lat = mh2lat(locator);
  printf("The latitude of the Eiffel tower is %f, and its longitude is %f\n", lat, lon);
  return 0;
}
```

An example is also available for Arduino from the examples menu.

## Installation
### Linux
```
gcc -c maidenhead.c
ar -crv libmaidenhead.a maidenhead.o
# copy libmaidenhead.a to /usr/local/lib and maidenhead.h to /usr/local/include or use it in your project like:
# gcc -I /path/to/maidenhead -o main main.c /path/to/maidenhead/libmaidenhead.a
```
### Arduino IDE
1. Click the green Code button and then the Download ZIP button.
2. Open the ZIP and copy the directory inside it to My Documents -> Arduino -> libraries.
3. Rename the directory from `maidenhead-master` to `Maidenhead`.
4. Add `#include <maidenhead.h>` to use the library in your sketch.
