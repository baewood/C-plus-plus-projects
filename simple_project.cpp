//circuit board
#include <iostream>
using namespace std;

int main()
{
	double costOfBoard = 14.95,
		percent = .35,
		sellingPrice = costOfBoard * (1 + percent);

	cout << "The selling price for a circuit board ";
	cout << "that costs $" << costOfBoard << " would be $" << sellingPrice << endl;
	return 0;
}
