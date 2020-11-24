#include "../../std_lib_facilities.h"

// Write a function print_array10(ostream& os, int* a) that prints out the values of a (assumed to have ten elements) to os.
void print_array10(ostream& os, int* a) {
    for (int i = 0; i < 10; ++i)
    {
        os << a[i] << endl;
    }
}

// Write a function print_array(ostream& os, int* a, int n) that prints out the values of a (assumed to have n elements) to os.
void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i < n; ++i)
    {
        os << a[i] << endl;
    }
}

// Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array()
void print_vector(ostream& os, vector<int>& vect) {
    for (int i = 0; i < vect.size(); ++i)
    {
        os << vect[i] << endl;
    }
}

int main()
try {
    // Drill - free-store allocation
    // Allocate an array of ten int s on the free store using new.
    int* arrayOfTenInts = new int[10];
    // Print the values of the ten int s to cout.
    for (int i = 0; i < 10; ++i) {
        cout << "arrayOfTenInts[" << i << "]= " << arrayOfTenInts[i] << endl;
    }

    cout << "\n----------\n\n";

    // Deallocate the array (using delete[]).
    delete[] arrayOfTenInts;
    // Allocate an array of ten int s on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
    int* arrayOfTenIntsAgain = new int[10];

    for (int i = 0; i < 10; ++i) {
        arrayOfTenIntsAgain[i]=100+i;
    }
    print_array10(cout, arrayOfTenIntsAgain);

    cout << "\n----------\n\n";
    // Allocate an array of 11 int s on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
    int* arrayOfElevenInts = new int[11];
    for (int i = 0; i < 11; ++i) {
        arrayOfElevenInts[i]=100+i;
    }
    print_array(cout, arrayOfElevenInts, 11);


    cout << "\n----------\n\n";
    // Allocate an array of 20 ints on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
    int* arrayOfTwentyInts = new int[20];
    for (int i = 0; i < 20; ++i) {
        arrayOfTwentyInts[i]=100+i;
    }
    print_array(cout, arrayOfTwentyInts, 20);

    // Did you remember to delete the arrays? (If not, do it.) //Haha no, good one
    delete[] arrayOfTenIntsAgain;
    delete[] arrayOfElevenInts;
    delete[] arrayOfTwentyInts;


    cout << "\nVector----------\n\n";
    // Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array()
    vector<int> vectorOfTenInts;
    for (int i = 0; i < 10; ++i) {
        vectorOfTenInts.push_back(100+i);
    }
    print_vector(cout, vectorOfTenInts);

    cout << "\n----------\n\n";
    vector<int> vectorOfElevenInts;
    for (int i = 0; i < 11; ++i) {
        vectorOfElevenInts.push_back(100+i);
    }
    print_vector(cout, vectorOfElevenInts);

    cout << "\n----------\n\n";
    vector<int> vectorOfTwentyInts;
    for (int i = 0; i < 20; ++i) {
        vectorOfTwentyInts.push_back(100+i);
    }
    print_vector(cout, vectorOfTwentyInts);

    return 0;
}

catch(exception& e) {
    cerr << "Ooopsie daisy we got an exception: " << e.what() << '\n';
    return 1;
}

catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}
