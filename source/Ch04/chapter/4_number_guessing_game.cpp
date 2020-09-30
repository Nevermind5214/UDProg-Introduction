#include "../../std_lib_facilities.h"

int main()
{
	int high = 100;
	int low = 1;
	int myguess = ((high + low - 1) + 0.5) / 2;
	char inchar = ' ';
	
	cout << "Think of a number between " << low << " and " << high << "!\n";
	
	while(high >= low && myguess >= low)
	{
		myguess = ((high + low - 1) + 0.5) / 2;
		cout << "high: " << high << " low: " << low << " myguess: " << myguess << endl;
		cout << "Is the number you are thinking of less than " << myguess << "? (y / n)\n";
		cin >> inchar;
		
		if(inchar == 'y'){
			high = myguess - 1;
		}
		
		else if(inchar == 'n'){
			low = myguess + 1;
		}

		else cout << "(y / n)!!!!!!!\n";
	}
	cout << "high: " << high << " low: " << low << " myguess: " << myguess << endl;
	if(inchar == 'y') cout << "Your number is: " << myguess-1 << endl;
	else if(inchar == 'n') cout << "Your number is: " << myguess+1 << endl;
	else error("BUTA VAGY");
	
	return 0;
}
