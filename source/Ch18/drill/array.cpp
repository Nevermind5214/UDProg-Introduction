#include "../../std_lib_facilities.h"

// Define a global int array ga of ten int s initialized to 1, 2, 4, 8, 16, etc.
const int gasize = 10;
int ga[gasize] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };


// Define a function f() taking an int array argument and an int argument
// indicating the number of elements in the array.
void f(int myIntArray[], int n) {

	// Define a local int array la of ten ints.
	const int lasize = 10;
	int la[lasize];

	// Copy the values from ga into la.
	for (int i = 0; i < lasize; ++i) {
		la[i] = ga[i];
	}

	cout << "Elements of the local int array:" << endl;
	// Print out the elements of la.
	for ( int i = 0; i < lasize; ++i){
		cout << "la[" << i << "]= " << la[i] << endl;
	}

	// Define a pointer p to int and initialize it with an array allocated on the
	// free store with the same number of elements as the argument array.
	int* p = new int[n];
	// Copy the values from the argument array into the free-store array.
	for (int i = 0; i < n; ++i) {
		p[i] = myIntArray[i];
	}

	// Print out the elements of the free-store array.
	cout << "Elements of the free-store array:" << endl;
	for ( int i = 0; i < n; ++i){
		cout << "p[" << i << "]= " << p[i] << endl;
	}
	// Deallocate the free-store array.
	delete[] p;
}

int main()
try {

	// Call f() with ga as its argument.
	cout << "Call f() with ga as its argument." << endl;
	f(ga, gasize);

	// Define an array aa with ten elements, and initialize it with the first ten
	// factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.).
	const int aasize = 10;
	int aa[aasize];
	aa[0] = 1;
	for (int i = 1; i < aasize; ++i) {
		aa[i] = aa[i-1]*(i+1);
	}

	//Call f() with aa as its argument.
	cout << endl << "Call f() with aa as its argument." << endl;
	f(aa, aasize);

}

catch (exception& e) {
	cerr << "Oopsie doopsie wtf happened, exception: " << e.what() << endl;
}

catch (...) {
	cerr << "cerr everything else exception\n";
}