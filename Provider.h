#ifndef __GT_PROVIDER_H_
#define __GT_PROVIDER_H_
#include <Arduino.h>
class Provider {
  
public:  
    virtual void begin(uint32_t parameter) = 0;
    virtual size_t read(char * buf) = 0;
    virtual size_t write(const char* buf) = 0;
};
#endif
