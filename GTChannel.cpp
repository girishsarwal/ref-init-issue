#include "GTChannel.h"


Channel::Channel(Provider& p)
  : provider(p) {
    
};

void Channel::begin(uint32_t parameter) {
  
};

void Channel::write(const char* data) {
  provider.write(data);
};


size_t Channel::read(char* data) {
  return provider.read(data);
};
