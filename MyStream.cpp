#include "MyStream.h"
size_t _MyStream::write(uint8_t) {
  return 0;
}
int _MyStream::available() {
  return 0;
}
int _MyStream::read() {
  return 0;
}
int _MyStream::peek() {
  return 0;
}
_MyStream MyStream;
