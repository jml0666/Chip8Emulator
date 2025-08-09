#include "chip8_stack.h"
#include "chip8.h"
#include <assert.h>

static void chip8_stack_in_bounds(struct chip8 * ch8)
{
    assert(ch8->registers.SP < CHIP8_TOTAL_STACK_DEPTH);
}

void chip8_stack_push(struct chip8 * c8, unsigned short val)
{
    chip8_stack_in_bounds(c8);
    c8->stack.stack[c8->registers.SP] = val;
    //Update SP
    c8->registers.SP++;
}

unsigned short chip8_stack_pop(struct chip8 * c8)
{
    c8->registers.SP--;
    chip8_stack_in_bounds(c8);
    unsigned short val = c8->stack.stack[c8->registers.SP];
    return val;
}