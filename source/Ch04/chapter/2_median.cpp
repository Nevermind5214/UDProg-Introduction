#include "../../std_lib_facilities.h"
/*Páratlan elemszám esetén rendezett sokaság:
1   2   8
A medián a középsõ elem:
1  [2]	8
Páros elemszám esetén:
1   2   3   8
A rendezett sokaság:
1  [2] [3]	8
A medián a középsõ elemek számtani közepe: 2,5.*/

int main()
{
    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read into temp
    temps.push_back(temp); // put temp into vector
    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';
    // compute median temperature:
    sort(temps); // sort temperatures

    int a=temps.size()/2;
    if (temps.size()%2 == 0) cout << "Median temperature: " << (temps[a-1]+temps[a])/2 << '\n';
    else cout << "Median temperature: " << temps[a] << '\n';

    return 0;
}
