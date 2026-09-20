#include <stdio.h>
#include "simple.h"

void loadProgram(const char *filename, int memory[]){
    FILE *file = fopen(filename, "r");

    if(file == NULL){
        printf("Unable to open the file");
        return;
    }

    int i = 0;

    while(i < MEMORY_SIZE && fscanf(file, "%d", &memory[i]) == 1){
        i++;
    }

    fclose(file);
}

void displayState(
    int memory[],
    int accumulator,
    int instructionCounter,
    int instructionRegister,
    int opcode,
    int operand
){
    printf("Accumulator: %d\n", accumulator);
    printf("Instruction Counter: %d\n", instructionCounter);
    printf("Instruction Register: %d\n", instructionRegister);
    printf("Opcode: %d\n", opcode);
    printf("Operand: %d\n", operand);

    printf("    ");

    for (int i = 0; i < 10; i++)
    {
        printf("%6d", i);
    }

    printf("\n");

    for (int row = 0; row < 10; row++){
        printf("%4d", row);

        for (int col = 0; col < 10; col++){
            printf("%6d", memory[row * 10 + col]);
        }

        printf("\n");
    }
}