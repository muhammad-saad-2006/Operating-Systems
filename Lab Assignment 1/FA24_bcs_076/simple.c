#include <stdio.h>
#include "simple.h"

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("The run command should have to arguments i.e %s sml.txt\n", argv[0]);
        return 1;
    }

    int memory[MEMORY_SIZE] = {0};

    loadProgram(argv[1], memory);

    int instructionCounter = 0;
    int instructionRegister = 0;
    int accumulator = 0;
    int opcode = 0;
    int operand = 0;

    while(1){

        displayState(
        memory,
        accumulator,
        instructionCounter,
        instructionRegister,
        opcode,
        operand
        );

        instructionRegister = memory[instructionCounter];
        printf("Executing instruction: %d\n", instructionRegister);

        opcode = instructionRegister / 100;
        operand = instructionRegister % 100;

        instructionCounter++;

        switch (opcode)
        {
        case READ:
            printf("Enter a number: ");
            scanf("%d", &memory[operand]);
            break;
            
        case WRITE:
            printf("Result: %d\n", memory[operand]);
            break;
            
        case LOAD:
            accumulator = memory[operand];
            break;

        case STORE:
            memory[operand] = accumulator;
            break;
        
        case ADD:
            accumulator += memory[operand];
            break;

        case SUBTRACT:
                accumulator -= memory[operand];
                break;

        case DIVIDE:
            accumulator /= memory[operand];
            break;

        case MULTIPLY:
            accumulator *= memory[operand];
            break;

        case BRANCH:
            instructionCounter = operand;
            break;

        case BRANCHNEG:
            if (accumulator < 0){
                instructionCounter = operand;
            }
            break;

        case BRANCHZERO:
            if (accumulator == 0){
                instructionCounter = operand;
            }
            break;

        case HALT:
            return 0;

        default:
            break;
        }

        printf("\n---------------------------------------------\n");
}