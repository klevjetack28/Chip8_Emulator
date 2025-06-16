#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MEM_SIZE 4096
#define BITS_PER_ADR 12
#define ADR_FONT 0x50
#define ADR_ROM 0x200

bool check_address(uint16_t address);
void memory_init();
uint8_t memory_read(uint16_t address);
void memory_write(uint16_t address, uint8_t value);
void load_rom();
void load_font();
void print_memory();

#endif // MEMORY_H
