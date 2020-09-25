#include "../../std_lib_facilities.h"
int main()
{
    string val1 = "", val2 = "", val3 ="";
    cout << "Please enter three values: \n";
    cin >> val1 >> val2 >> val3;
    if (val3 > val1 && val3 > val2) //3 biggest
    {
        if(val2 > val1) cout << val1 << ", " << val2 << ", " << val3 << endl; // 1 2 3
        else cout << val2 << ", " << val1 << ", " << val3 << endl; // 2 1 3
    }
    else if (val2 > val1 && val2 > val3) //2 biggest
    {
        if(val3 > val1) cout << val1 << ", " << val3 << ", " << val2 << endl; // 1 3 2
        else cout << val3 << ", " << val1 << ", " << val2 << endl; // 3 1 2
    }
    else if (val1 > val2 && val1 > val3) //1 biggest
    {
        if(val2 > val3) cout << val3 << ", " << val2 << ", " << val1 << endl; // 3 2 1
        else cout << val2 << ", " << val3 << ", " << val1 << endl; // 2 3 1
    }
    else error("IDK ERROR I GUESS");

	return 0;
}
