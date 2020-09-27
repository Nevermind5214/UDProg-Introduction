#include "../../std_lib_facilities.h"

int main()
{
    //The character 'b' is char('a'+1) , 'c' is char('a'+2) , etc. Use a loop to write out
    //a table of characters with their corresponding integer values:
    //a 97
    //b 98
    //. . .
    //z 122

    int i='a';
    while(i < 'z'+1)
    {
        cout << i << " " << char(i) <<endl;
        ++i;
    }

	return 0;
}
