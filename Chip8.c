#define RAM_SIZE 4096
#define DIS_WIDTH 64
#define DIS_HEIGHT 32
#define STK_SIZE 256
#define NUM_REGISTERS 16

struct {
    uint8_t memory[RAM_SIZE];
    uint8_t display[DIS_WIDTH][DIS_HEIGHT];
    uint8_t* PC;
    uint8_t I;
    uint8_t stack[STK_SIZE];
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint8_t registers[NUM_REGISTERS];
} Chip8;

int init()
{
    load_ROM();
}
