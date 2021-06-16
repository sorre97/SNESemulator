#include "olc6502.h"
//#include "Bus.h" // fixes uncomplete type

#ifdef DEBUG
#include <iostream>
#endif

olc6502::olc6502(Bus * n) 
{ 
  bus = n;
  
  #ifdef DEBUG
    std::cout << "Bus connected" << std::endl;
  #endif
}

olc6502::~olc6502() 
{ 
}

void olc6502::write(uint16_t a, uint8_t d)
{
  return bus->write(a, d);
}

uint8_t olc6502::read(uint16_t a)
{
  return bus->read(a, false);
}
