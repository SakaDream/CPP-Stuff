#include <iostream>
using namespace std;

int getUserInput()
{
    cout << "Please enter an integer: ";
    int value;
    cin >> value;
    return value;
}

int getMathematicalOperation()
{
    cout << "Please enter which operator you want (1: +, 2: -, 3: *, 4: /): ";
    int op;
    cin >> op;
    while(op < 1 | op > 4)
    {
        cout << "Invalid option, please try again: ";
        cin >> op;
    }
    return op;
}

int calculateResult(int x, int op, int y)
{
    if(op == 1) return x + y;
    if(op == 2) return x - y;
    if(op == 3) return x * y;
    if(op == 4) return x / y;
}

void printResult(int result)
{
    cout << "Your result: " << result << endl;
}
