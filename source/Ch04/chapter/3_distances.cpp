#include "../../std_lib_facilities.h"

int main()
{
    vector<double> distances;
    double dist = 0, total = 0;

    for(double dist; cin >> dist;)
    {
        distances.push_back(dist);
        total += dist;
    }

    cout << "Total distance: " << total << endl;

    cout << "Smallest distance: ";
    double mostest=distances[0];
    for(double mydist : distances)
    {
        if(mydist < mostest) mostest = mydist;
    }
    cout << mostest << endl;

    cout << "Greatest distance: ";
    mostest=distances[0];
    for(double mydist : distances)
    {
        if(mydist > mostest) mostest = mydist;
    }
    cout << mostest << endl;

    cout << "Mean of distances: " << total/distances.size();

    return 0;
}
