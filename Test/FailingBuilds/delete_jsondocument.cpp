// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2021
// MIT License

#include <ArduinoJson/ArduinoJson.h>

struct Stream {};

int main() {
  JsonDocument* doc = new DynamicJsonDocument(42);
  delete doc;
}
