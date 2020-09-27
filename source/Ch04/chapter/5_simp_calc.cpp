#include "../../std_lib_facilities.h"
int main()
{
    char op;
    double num1 = 0, num2 = 0;
    cout << "Please enter an operation followed by two operands (eg.: 3 5 *) : ";
    cin >> num1 >> num2 >> op;
    switch(op){
        case '+':
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << ".\n";
            break;
        case '-':
            cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << ".\n";
            break;
        case '*':
            cout << "The product of " << num1 << " and " << num2 << " is " << num1*num2 << ".\n";
            break;
        case '/':
            cout << "The quotient of " << num1 << " and " << num2 << " is " << num1/num2 << ".\n";
            break;
        default:
            error("HIBA VAN!!!!!!!!!!!!!!!!!!!!!");
    }

    return 0;
}
