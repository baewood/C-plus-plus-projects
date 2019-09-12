// Create a change-counting game that asks the user to enter what coins 
// to use to make exactly one dollar. The program should ask the user to enter 
// the number of pennies, nickels, dimes, and quarters. If the total value of 
// the coins entered is equal to one dollar, the program should congratulate 
// the user for winning the game. Otherwise, the program should display a 
// message indicating whether the amount entered was more or less than one 
// dollar. Use constant variables to hold the coin values.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pennies, 
		nickels, 
		dimes, 
		quarters, 
		totalAmount;

	cout << "Change for a Dollar Game";

	cout << "Enter the number of pennies: ";
	cin >> pennies;
	cout << "Enter the number of nickels: ";
	cin >> nickels;
	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << "Enter the number of quarters: ";
	cin >> quarters;

	totalAmount = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

	if (totalAmount == 1.00)
		cout << "\n Congrats! You entered a dollar.\n\n";
	else
		if ((totalAmount < 1.00) && (totalAmount > 0))
			cout << "\nYou entered less than one dollar.\n\n";
		else
			if (totalAmount > 1.00)
				cout << "\nYou entered more than one dollar.\n\n";

	system("pause");
	return 0;
}
