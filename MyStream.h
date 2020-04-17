#ifndef __MY_STREAM_H_
#define __MY_STREAM_H_
#include <FS.h>
class _MyStream: public Stream {
     size_t write(uint8_t);
     int available();
     int read();
     int peek();
};
   
extern _MyStream MyStream;

#endif
