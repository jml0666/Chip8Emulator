#include "chip8_memory.h"

void chip8_memory_set(struct chip8_memory* mem, int index, unsigned char val)
{
    if((index >= 0) && (index < CHIP8_MEMORY_SIZE))
    {
        mem->memory[index] = val;
    }
}

unsigned char chip8_memory_get(struct chip8_memory * mem, int index)
{
    unsigned char l_result = 0;

    if((index >= 0) && (index < CHIP8_MEMORY_SIZE))
    {
        l_result = mem->memory[index];
    }

    return l_result;
}