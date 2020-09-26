#include "../../std_lib_facilities.h"

int main()
{
    const vector<string> disliked = {"Broccoli", "potZH", "teszt"};
    string word;

    while(cin >> word){
        bool bleep = false;

        for (int i=0; i<disliked.size(); ++i)
            if (word == disliked[i]) bleep = true;

        if (bleep) cout << "BLEEP\n";
        else cout << word << endl;
    }

    return 0;
}
