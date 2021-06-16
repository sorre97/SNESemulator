#include "Bus.h"

Bus::Bus()
{
  /* Clearing RAM at first start */
  for(auto &i : RAM) { i = 0x00; }
}

Bus::~Bus()
{
}

void Bus::write(uint16_t addr, uint8_t data)
{
  if(addr >= 0x0000 && addr <= 0xFFFF)
  {
    RAM[addr] = data;
  }
}

uint8_t Bus::read(uint16_t addr, bool bReadOnly)
{
  if(addr >= 0x0000 && addr <= 0xFFFF)
  {
    return RAM[addr];
  }

  return 0x00;
}