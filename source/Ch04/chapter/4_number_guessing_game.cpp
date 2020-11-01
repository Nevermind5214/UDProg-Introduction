#include "../../std_lib_facilities.h"

int main()
{
	int high = 100;
	int low = 1;
	int myguess = ((high + low - 1) / 2.0)+  0.5;
	char inchar = ' ';
	
	cout << "Think of a number between " << low << " and " << high << "!\n";
	
	while(true)
	{
		cout << "high: " << high << " low: " << low << " myguess: " << myguess << endl;
		if(high <= low) break;
		else
		{
			cout << "Is the number you are thinking of less than " << myguess << "? (y/n)\n";
			cin >> inchar;

			if(inchar == 'y'){
				high = myguess - 1;
			}
		
			else if(inchar == 'n'){
				low = myguess + 1;
			}

			else cout << "(y / n)!!!!!!!\n";

			myguess = ((high + low - 1) / 2.0)+  0.5;
		}
	}
	cout << "high: " << high << " low: " << low << " myguess: " << myguess << endl;
	cout << "Your number is: " << myguess << endl;

	return 0;
}
