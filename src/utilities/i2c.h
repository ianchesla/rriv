
#include <Arduino.h>
#include <Wire_slave.h>

void i2cSendTransmission(byte i2cAddress, byte registerAddress, byte * data, int numBytes);
void i2cError(int transmissionCode);
void scanIC2(TwoWire * wire);
