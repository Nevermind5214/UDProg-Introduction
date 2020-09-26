#include "../../std_lib_facilities.h"

int main()

{
    //She she laughed He He He because what he did did not look very very good good.
    string previous = " "; // previous word; initialized to “not a word”
    string current; // current word
    while (cin>>current) { // read a stream of words
        if (previous == current) // check if the word is the same as last
        cout << "repeated word: " << current << '\n';
        previous = current;
    }
	return 0;
}
