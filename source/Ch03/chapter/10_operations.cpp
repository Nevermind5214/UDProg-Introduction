#include "../../std_lib_facilities.h"
int main()
{
    char op;
    double num1 = 0, num2 = 0;
    cout << "Please enter an operation followed by two operands (eg.: * 3 5) : ";
    cin >> op >> num1 >> num2;
    switch(op){
        case '+':
            cout << num1 << op << num2 << "=" << num1+num2;
            break;
        case '-':
            cout << num1 << op << num2 << "=" << num1-num2;
            break;
        case '*':
            cout << num1 << op << num2 << "=" << num1*num2;
            break;
        case '/':
            cout << num1 << op << num2 << "=" << num1/num2;
            break;
        default:
            error("HIBA VAN!!!!!!!!!!!!!!!!!!!!!");
    }

    return 0;
}
