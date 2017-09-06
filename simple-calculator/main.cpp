#include <iostream>
#include "cal.h"

using namespace std;

int main()
{
    int input1 = getUserInput();
    int op = getMathematicalOperation();
    int input2 = getUserInput();
    int result = calculateResult(input1, op, input2);
    printResult(result);
    return 0;
}
