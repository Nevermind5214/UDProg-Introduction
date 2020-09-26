#include "../../std_lib_facilities.h"
int main()
{
    // simple program to exercise operators
    cout << "Please enter an integer value: ";
    int n;
    cin >> n;
    double o = n;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2.0
    << "\nsquare root of n == " << sqrt(o)
    << '\n'; // name for newline (“end of line”) in output

	return 0;
}
