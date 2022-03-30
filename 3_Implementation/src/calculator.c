#include <calculator.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2; // return Addition operation
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2; //return substration operation
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2; //return multiplication operation
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2; //return division operation
}