#ifndef BUS_H
#define BUS_H

#include <array>
#include <cstdint>
//#include "olc6502.h"

class Bus
{
  private:

  public:
    Bus();
    ~Bus();
    
    /* Bus operations */
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly=false);

    /* Devices on the BUS */
    //olc6502 cpu;
    
    /* Fake RAM */
    std::array<uint8_t, 64*1024> RAM;

    
};

#endif