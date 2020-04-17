#ifndef _GT_CHANNEL_H_
#define _GT_CHANNEL_H_
#include <Arduino.h>
#include "Provider.h"
#define MAX_CHANNEL_NAME             8
#define MAX_CHANNEL_COUNT            8
#define MAX_CHANNEL_VALUE            8


class Channel  {
  private:
    Provider& provider;
    
    char signal[MAX_CHANNEL_NAME];
    uint32_t protocol_pins;              /**
                                       D0 - GPIO4
                                       D1 - GPIO5
                                       D2 - GPIO13
                                       D3 - GPIO12
                                       D4 - GPIO14
                                       D5 - GPIO1
                                       D6 - GPIO3
                                       D7 - GPIO15

                                       **/
  public:
    Channel(Provider&);
    void begin(uint32_t parameter);
    void write(const char* data);
    size_t read(char* data);
    
};
#endif
