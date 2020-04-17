#ifndef _GT_DEVICE_H_
#define _GT_DEVICE_H_
#include <memory>
#include <Arduino.h>
#define GT_DEVICE_MODE_MASK_SPI                   (1 << 15)
#define GT_DEVICE_MODE_MASK_I2C                   (1 << 14)
#define GT_DEVICE_MODE_MASK_SUART0                (1 << 13)
#define GT_DEVICE_MODE_MASK_SUART1                (1 << 12)
#define GT_DEVICE_MODE_MASK_HUART                 (1 << 11)
#define GT_DEVICE_MODE_MASK_IO_COUNT              (1 << 10) | (1 << 9) | (1 << 8)

#define GT_DEVICE_MODE_MASK_PIN7
#define GT_DEVICE_MODE_MASK_PIN6
#define GT_DEVICE_MODE_MASK_PIN5
#define GT_DEVICE_MODE_MASK_PIN4
#define GT_DEVICE_MODE_MASK_PIN3
#define GT_DEVICE_MODE_MASK_PIN2
#define GT_DEVICE_MODE_MASK_PIN1
#define GT_DEVICE_MODE_MASK_PIN0

#include "GTChannel.h"
class Device {
  public:
    std::vector<Channel> channels;
    void generateChannels(uint32_t operationMode);
    Device();
    ~Device();
};  
extern Device DEVICE;
#endif
