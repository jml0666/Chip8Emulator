What is Chip8

- Chip8 is an interpreter from the mid 1970s
- Was designed to make the development of games easier
- Is essentially a virtual machie, think of the java virtual machine but something far more basic
- Chip8 nterpreters can play many classical games such as pong, tetris and space invaders

**************************** The memory layout [4096b] ********************************************


-------------------- 0xFFF - End of memory

    0x200-0xFFF
    Program Data

-------------------- 0x200 - Start of chip8 programs

    0x000-0x1FF
    Res for chip8

-------------------- 0x000 - Start of chip8 RAM



*********************************** The Registers **************************************************:

Chip8 has a stack that is an array of 16 16-bit values, used to store the address that the chip8 
should return to when returning from a subroutine. Chip8 allows for up to 16 levels of nested soubroutines.

Note: The stack is not part of main memory; it is separated from it.

Chip8 has 16 8-bit data registers, these registers store general data.
Each 8-bit registers can hold 1 byte of information.

---> Data Registers: [V0]...[VF]

Chip8 also has a 16 bit register named "I" This register is generally used to store memory addresses.

Chip8 also has a 16 bit PC(Program counter) register which point to the address of the current instruction being executed

Chip8 also has an 8-bit Stack Pointer register that points to a location in the stack.

Chip8 also has a sound timer and a delay time, these are 8-bits and when above zero decrement at a rate of 60Hz.

The Delay timer:

-Chip8 stops executing instructions when the delay timer is above 0.
-Chip8 decrements the delay timer at a rate of 60Hz
-when the delay timer is zero again the program execution resumes.

************************************** The Display ***************************************************

Chip8 display size is 64x32 Pixels. It is a monochrome display.

Drawing: 
Drrawing in the Chip8 displau is done with sprites not pixels
If a sprite overflows the screen it wraps back around to the other side
Sprites are many pixels grouped together taht can be drawn to the screen as a whole.Example:

****	11110000    0xF0
*  *    10010000    0x90
*  *    10010000    0x90
*  *    10010000    0x90
****	11110000    0xF0

Sprites can be a maximum of 8 bits in width (X axis) and up to 15 bytes in length (Y axis)

Sprotes get drawn to the Chip8 display if the pixels go out of bounds (X >= 64 || Y > 32)
then the breaching pixels wrap back around to the start of the display (X = 0, Y = 0).

Sprites get XOR'ed onto the display if this causes any pixel to be erased then the VF register is set.

*************************************** The Keyboard **************************************************

The Chip8 keyboard has 16 keys from 0 to F. This can be represented in the emulator as a 16 byte array.
With a true value in that array meanin the key is pressed down and false value meaning the key is not pressed.

************************************ The instruction Set **********************************************

The Chip8 instruction set has 36 different instruction that need to be implemented for a 
succesful implementation.
The instruction set has instructions for mathematical operations, drawing and much more.













