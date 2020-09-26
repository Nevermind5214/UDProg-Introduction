#include "../../std_lib_facilities.h"
int main()
{
    // converts yen ( 'y' ), kroner ( 'k' ), and pounds ( 'p' ) into dollars

    double moneh = 1; // moneh
    char unit = ' '; // a space is not a unit

    cout<< "Please enter the amount followed by a unit (y, k, p):\n";
    cin >> moneh >> unit;
    if (unit == 'y')
    cout << moneh << " y == " << moneh*0.0095 << " $";
    else if (unit == 'k')
    cout << moneh << " k == " << moneh*0.1 << " $";
    else if (unit == 'p')
    cout << moneh << " p == " << moneh*1.27 << " $";
    else
    cout << "Sorry, I don't know a unit called '" << unit << "'\n";

	return 0;
}
