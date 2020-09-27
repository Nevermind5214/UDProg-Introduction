#include "../../std_lib_facilities.h"
/*P�ratlan elemsz�m eset�n rendezett sokas�g:
1   2   8
A medi�n a k�z�ps� elem:
1  [2]	8
P�ros elemsz�m eset�n:
1   2   3   8
A rendezett sokas�g:
1  [2] [3]	8
A medi�n a k�z�ps� elemek sz�mtani k�zepe: 2,5.*/

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
