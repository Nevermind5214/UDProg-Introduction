#include "../../std_lib_facilities.h"

int mysquare(int val)
{
    int a = 0;
    for (int i = 0; i < val; ++i) a = a + val;
    return a;
}

int main()
{
    int i = 0; // start from 0
    while (i<100) {
    cout << i << '\t' << mysquare(i) << '\n';
    ++i; // increment i (that is, i becomes i+1)
    }

	return 0;
}
