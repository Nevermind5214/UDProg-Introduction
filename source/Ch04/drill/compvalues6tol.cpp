#include "../../std_lib_facilities.h"

double to_meters(double value, string unit)
{
    if(unit == "cm") value = value / 100;
    else if(unit == "m");
    else if(unit == "in") value = value * 2.54 / 100;
    else if(unit == "ft") value = value * 2.54 * 12/100;
    else error("Illegal unit, now the POPO is coming for u");
    return value;
}

int main()
{
    double a = 0, sum = 0;
    int smallest = 0, largest = 0;

    string unit = "";
    string sm_unit = "";
    string lg_unit = "";

    vector<double> values;
    vector<double> values_in_meters;

    cout << "Please enter a value(eg.: 12 in):\n";
    cout << "Accepted units: cm, m, in, ft\n";

    while(cin >> a >> unit)
    {
    	double converted=0;

        cout << "\nThe value encountered= " << a << " " << unit << endl;
    	converted = to_meters(a,unit);
        cout << "The value encountered in meters= " << converted << " m\n\n";

    	values.push_back(a);
    	values_in_meters.push_back(converted);

    	sum += converted;

        if(converted > values_in_meters[largest] || lg_unit == "")
        {
        	largest = values.size() - 1;
        	lg_unit = unit;
        	cout << "The largest so far\n";
        }
        if(converted < values_in_meters[smallest] || sm_unit == "")
        {
        	smallest = values.size() - 1;
        	sm_unit = unit;
        	cout << "The smallest so far\n";
        }
	}

    cout << "\n-----\nThe smallest: " << values[smallest] << sm_unit << endl;
    cout << "The largest: " << values[largest] << lg_unit << endl;
    cout << "The number of values: " << values.size() << endl;
    cout << "The sum of the values: " << sum << " m\n";

    sort(values_in_meters);
    for(int i=0;i<values_in_meters.size();i++) cout << values_in_meters[i] << " m\n";

    return 0;
}
