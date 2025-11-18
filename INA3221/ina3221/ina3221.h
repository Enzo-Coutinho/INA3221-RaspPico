#ifndef INA3221_H
#define INA3221_H

#include "i2c/i2c_driver.h"
#include "register_map.h"

enum CHANNEL {
    CHANNEL_1 = 0,
    CHANNEL_2 = 1,
    CHANNEL_3 = 2
};

void resetINA3221(void);
bool isConnectedINA3221(void);
void defaultInitINA3221(void);

float getCurrent(enum CHANNEL channel);

void setShuntOffset(float offset);
void setShuntResistor(enum CHANNEL channel, float resistance);

float getShuntVoltage(enum CHANNEL channel);
float getBusVoltage(enum CHANNEL channel);

#endif