#include "../../std_lib_facilities.h"

// The second part focuses on pointers and their relation to arrays. Using print_array() from the last drill.
void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i < n; ++i)
    {
        os << a[i] << endl;
    }
}

int main()
try {
    // Allocate an int , initialize it to 7, and assign its address to a variable p1.
    int it = 7;
    int* p1 = &it;

    // Print out the value of p1 and of the int it points to.
    cout << "p1= " << p1 << endl;
    cout << "*p1= " << *p1 << endl;

    // Allocate an array of seven int s; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p2.
    int* p2 = new int[7];
    for (int i = 0; i<7; ++i)
    {
        p2[i] = pow(2,i);
    }
    // Print out the value of p2 and of the array it points to.
    cout << "p2= " << p2 << endl;
    print_array(cout, p2, 7);

    // Declare an int* called p3 and initialize it with p2
    int* p3 = p2;

    // Assign p1 to p2
    p2 = p1;

    // Assign p3 to p2
    p2 = p3;

    // Print out the values of p1 and p2 and of what they point to.
    cout << "p1= " << p1 << endl;
    cout << "*p1= " << *p1 << endl;
    cout << "p2= " << p2 << endl;
    cout << "*p2= " << *p2 << endl;

    // Deallocate all the memory you allocated from the free store.
    //delete[] p1; nem kell
    delete[] p2;
    //delete[] p3; ez sem

    // Allocate an array of ten int s; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.
    p1 = new int[10];
    for (int i = 0; i < 10; ++i){
        p1[i] = pow(2,i);
    }

    // Allocate an array of ten int s, and assign its address to a variable p2.
    p2 = new int[10];

    // Copy the values from the array pointed to by p1 into the array pointed to by p2.
    for (int i = 0; i<10; ++i)
    {
        p2[i] = p1[i];
    }
    print_array(cout, p2, 10);

    cout << "\nVector----------\n\n";
    // Repeat 10–12 using a vector rather than an array.
    vector<int> v1;
    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(pow(2, i));
    }

    vector<int> v2;
    for (int i = 0; i < v1.size(); ++i)
    {
        v2.push_back(v1[i]);
    }

    for (int i = 0; i < v2.size(); ++i)
    {
        cout << v2[i] << endl;
    }

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
