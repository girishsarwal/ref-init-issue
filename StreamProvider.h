#ifndef _GT_STREAM_PROVIDER_H_
#pragma GCC optimize ("-O0")
#define _GT_STREAM_PROVIDER_H_
#include "Provider.h"
#include <FS.h>
#include <Arduino.h>
#include <memory>
class StreamProvider: public Provider {
  private:
    //String& name;
    Stream& stream;
  public:
    StreamProvider(Stream&);
    //StreamProvider(String&, Stream&);
    void begin(uint32_t parameter) override;
    size_t read(char * buf) override;
    size_t write(const char* buf) override;
};
#endif
