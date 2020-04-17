#include "StreamProvider.h"
#include "MyStream.h"
#pragma GCC optimize ("-O0")
//StreamProvider::StreamProvider(String& n, Stream& s)
//  : name(n), stream(s)
StreamProvider::StreamProvider(Stream& s)
  : stream(s)
{
  Serial.printf("\nSerial %x", &MyStream);
  Serial.printf("\nStream %x", &stream);
}

void StreamProvider::begin(uint32_t parameter) {
  Serial.println("begin started");
}
size_t StreamProvider::read(char* buf) {
  return stream.read();
}
size_t StreamProvider::write(const char* buf) {
  
  Serial.printf("\nSerial %x", &MyStream);
  Serial.printf("\nStream %x", &stream);
}
