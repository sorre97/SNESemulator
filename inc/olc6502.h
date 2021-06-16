#ifndef OLC6502_H
#define OLC6502_H

#include <cstdint>
#include "Bus.h"
#include "config.h"

class olc6502
{
  public:
    olc6502(Bus * n);
    ~olc6502();

    /* Bus operations */
    void write(uint16_t a, uint8_t d);
    uint8_t read(uint16_t a);

  private:
    Bus * bus = nullptr;
    
};


#endif