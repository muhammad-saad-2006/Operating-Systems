#define MEMORY_SIZE 100

#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define HALT 43

void loadProgram(const char *filename, int memory[]);

void displayState(
    int memory[],
    int accumulator,
    int instructionCounter,
    int instructionRegister,
    int opcode,
    int operand
);