#include "GTDevice.h"
#include <memory>
#include "StreamProvider.h"
#include "MyStream.h"
Device::Device() {

};
Device::~Device() {

};

void Device::generateChannels(uint32_t operationMode) {
  StreamProvider sp(MyStream);
  channels.push_back(Channel(sp));
};

Device DEVICE;
