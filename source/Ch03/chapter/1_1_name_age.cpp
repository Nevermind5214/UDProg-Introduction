#include "../../std_lib_facilities.h"
int main()
{
    // read name and age
    cout << "Please enter your first name and age\n";
    string first_name; // string variable
    double age; // integer variable
    cin >> first_name; // read a string
    cin >> age; // read an integer
    cout << "Hello, " << first_name << " (age " << age << " years)\n";
    cout << age << " years = " << age * 12 << " months\n";

	return 0;
}
