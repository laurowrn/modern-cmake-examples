#include "SafeMath.h"
#include "Logging.h"

#define INT_MAXIMUM 2147483648
#define INT_MINIMUM -INT_MAXIMUM

int add(int firstNumber, int secondNumber){
    if(firstNumber > 0 && secondNumber > INT_MAXIMUM - firstNumber){
        logCritical("Addition overflow! Returning 0.");
        return 0;
    }

    if(firstNumber < 0 && secondNumber < INT_MINIMUM - firstNumber){
        logCritical("Addition underflow! Returning 0.");
        return 0;
    }

    return firstNumber + secondNumber;
}

int subtract(int firstNumber, int secondNumber){
    if(firstNumber < 0 && secondNumber > INT_MAXIMUM + firstNumber){
        logCritical("Subtraction overflow! Returning 0.");
        return 0;
    }

    if(firstNumber > 0 && secondNumber < INT_MINIMUM + firstNumber){
        logCritical("Subtraction underflow! Returning 0.");
        return 0;
    }

    return firstNumber - secondNumber;
}

int multiply(int firstNumber, int secondNumber){
    if (secondNumber != 0 && firstNumber > INT_MAXIMUM/secondNumber){
        logCritical("Multiplication overflow! Returning 0.");
        return 0;
    }
    if (secondNumber != 0 && firstNumber < INT_MINIMUM/secondNumber){
        logCritical("Multiplication underflow! Returning 0.");
        return 0;
    }

    return firstNumber*secondNumber;
}

double divide(int firstNumber, int secondNumber){
    if(secondNumber == 0){
        logCritical("Division by 0! Returning 0.");
        return 0;
    }

    return firstNumber/secondNumber;
}