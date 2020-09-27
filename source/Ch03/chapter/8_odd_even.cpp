#include "../../std_lib_facilities.h"
int main()
{
    int val = 0;
    cout << "Please a value: \n";
    cin >> val;
    if (val%2 == 0) cout << "The value " << val <<" is an even number.\n";
    else cout << "The value " << val <<" is an odd number.\n";

	return 0;
}
