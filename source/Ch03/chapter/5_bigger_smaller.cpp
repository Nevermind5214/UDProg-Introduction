#include "../../std_lib_facilities.h"
int main()
{
    double val1 = 0, val2 = 0;
    cout << "Please enter two values: \n";
    cin >> val1 >> val2;

    if(val1 == val2) cout << "They are equal";
    else if(val1 > val2) cout << val1 << " is larger.\n" << val2 << " is smaller\n";
    else if(val2 > val1) cout << val2 << " is larger.\n" << val1 << " is smaller\n";
    else error("WTF");
    cout << val1 << "+" << val2 << "=" << val1+val2 << endl;
    cout << val1 << "-" << val2 << "=" << val1-val2 << endl;
    cout << val1 << "*" << val2 << "=" << val1*val2 << endl;
    cout << val1 << "/" << val2 << "=" << val1/val2 << endl;

	return 0;
}
