#include "../../std_lib_facilities.h"
int main()
{

	const double km_per_mile = 1609;
	double distance = 1;

	while(distance != 0)
	{
		cout << "Please enter a distance in miles: ";
		cin >> distance;
		cout << "Distance in kilometes: " << distance * km_per_mile << endl;
	}
	return 0;
}
