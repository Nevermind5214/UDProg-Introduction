#include "../../std_lib_facilities.h"
int main()
{
    vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string input;
    cin >> input;

    try{
        int mynum = stoi(input);
        if(0 <= mynum && mynum <=9) cout << values[mynum];
        else cout << "Unknown digit!\n";
    }
    catch(exception e){
        bool notfound = true;
        for(int i = 0; i < values.size(); i++)
        {
            if(values[i] == input)
                {
                    cout << i;
                    notfound = false;
                }
        }
        if(notfound) cout << "Unknown digit!\n";
    }

    return 0;
}
