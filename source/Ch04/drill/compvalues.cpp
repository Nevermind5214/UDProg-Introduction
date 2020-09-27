#include "../../std_lib_facilities.h"

int main()
{
    double a, b = 0;

    cout << "Please enter values A and B:\n";

    while(cin >> a >> b)
    {
        cout << "\na=" << a << " b=" << b <<endl;
        if(a > b) cout << "A is bigger.\n\n";
        else if(a < b) cout << "B is bigger\n\n";
        else cout << "the numbers are equal\n\n";
        if(abs(a-b) < 0.01) cout << "the numbers are almost equal\n";
    }

    return 0;
}
