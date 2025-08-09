INCLUDES = -I./include
FLAGS = -g
LIBPATH = -L./lib
LIBS = -lmingw32 -lSDL2main -lSDL2
OUTPUT = ./bin/main
SOURCES = ./src/main.c
OBJ = ./build/chip8_memory.o

all: $(OBJ)
	gcc $(FLAGS) $(INCLUDES) $(SOURCES) $(OBJ) $(LIBPATH) $(LIBS) -o $(OUTPUT)

./build/chip8_memory.o:./src/chip8_memory.c
	gcc $(FLAGS) $(INCLUDES) ./src/chip8_memory.c -c -o ./build/chip8_memory.o

clean:
	del build\*
