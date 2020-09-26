#include "../../std_lib_facilities.h"

int main()
{
    //The character 'b' is char('a'+1) , 'c' is char('a'+2) , etc. Use a loop to write out
    //a table of characters with their corresponding integer values:
    //a 97
    //b 98
    //. . .
    //z 122

    for(int i='a';i < 'z'+1; i++)
        cout << i << " " << char(i) <<endl;

    for(int i='A';i < 'Z'+1; i++)
        cout << i << " " << char(i) <<endl;

    for(int i='0';i < '9'+1; i++)
        cout << i << " " << char(i) <<endl;

	return 0;
}
