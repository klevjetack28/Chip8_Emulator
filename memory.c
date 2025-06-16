#include "memory.h"

uint8_t memory[MEM_SIZE];

bool check_address(uint16_t address)
{
    return address < MEM_SIZE;
}
    
void memory_init()
{
    for (int i = 0; i < MEM_SIZE; i++)
    {
        memory[i] = '\0';
    }

    load_font();
}

uint8_t memory_read(uint16_t address)
{
    if (check_address(address))
    {
        return memory[address];
    }
}   

void memory_write(uint16_t address, uint8_t value)
{
    if (check_address(address))
    {
        memory[address] = value;
    }
}

void load_rom()
{
    
}

void load_font()
{

}

// Memory Utilities
uint8_t rev8(uint8_t n)
{
    n = (((n & 0xa) >> 1) | ((n & 0x5) << 1));
    return ((n >> 2) | (n << 2));
}

void print_memory()
{

}
