#include "../../std_lib_facilities.h"

// Define a global vector<int> gv, initialize it with ten ints, 1, 2, 4, 8, 16, etc.
vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

// Define a function f() taking a vector<int> argument.
void f(const vector<int>& myVector) {

	//Define a local vector<int> lv with the same number of elements as the argument vector.
	vector<int> lv(myVector.size());

	// Copy the values from gv into lv.
	lv = gv;

	// Print out the elements of lv.
	cout << "Print out the elements of lv." << endl;
	for (int i = 0; i < lv.size(); ++i) {
		cout << "lv[" << i << "]= " << lv[i] << endl;
	}

	// Define a local vector<int> lv2 ; initialize it to be a copy of the argument vector.
	vector<int> lv2(myVector);

	// Print out the elements of lv2.
	cout << "Print out the elements of lv2." << endl;
	for (int i = 0; i < lv2.size(); ++i) {
		cout << "lv2[" << i << "]= " << lv2[i] << endl;
	}

}

int main()
try {

	// Call f() with gv as its argument.
	cout << "Call f() with gv as its argument." << endl;
	f(gv);

	// Define a vector<int> vv , and initialize it with the first ten factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.).
	vector<int> vv;
	vv.push_back(1);
	for (int i = 1; i < 10; ++i) {
		vv.push_back( (i + 1) * vv[i - 1] );
	}

	// Call f() with vv as its argument.
	cout << endl << "Call f() with vv as its argument." << endl;
	f(vv);
}

catch (exception& e) {
	cerr << "Oopsie doopsie wtf happened, exception: " << e.what() << endl;
}

catch (...) {
	cerr << "cerr everything else exception\n";
}