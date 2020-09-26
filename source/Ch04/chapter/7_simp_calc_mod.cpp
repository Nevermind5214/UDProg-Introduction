#include "../../std_lib_facilities.h"

int strtoint(string inputstring)
{
    try{
        int mynum = stoi(inputstring);
        if(0 <= mynum && mynum <=9) return mynum;
        else error("Unknown digit!");
    }
    catch(exception e){
        vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        bool notfound = true;
        for(int i = 0; i < values.size(); i++)
        {
            if(values[i] == inputstring)
                {
                    return i;
                    notfound = false;
                }
        }
        if(notfound) error("Unknown digit!\n");
    }
}

int main()
{
    char op;
    string num1str, num2str;
    cout << "Please enter an operation followed by two one-digit operands (eg.: 3 5 * or three five *) : \n";
    cin >> num1str >> num2str >> op;
    int num1 = strtoint(num1str), num2 = strtoint(num2str);

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
