#include <iostream>
#include "olc6502.h"
#include "Bus.h"
#include "config.h"

int main(int argc, char const *argv[])
{
  Bus bus;
  olc6502 cpu(&bus);

  cpu.write(0x0000, 0x002);
  std::cout << (int)cpu.read(0x0000) << std::endl;

  return 0;
}
