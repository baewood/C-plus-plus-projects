//Write a program that displays a table of speeds in kilometers per hour with 
//their values converted to miles per hour.The table should display the speeds 
//from 40 kilometers per hour through 120 kilometers per hour, in increments of 10 
//kilometers per hour. (In other words, it should display 40 kph, 50 kph, 60 kph and so forth, 
//up through 120 kph.)

//MPH = KPH * 0.6214

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double kilometers,	// Sets the variables
		milesPerHour;

	// Program description
	cout << "This table converts speeds in kilometers per hour to miles per hour.\n" 
		<< "------------------------------------\n\n";
	cout << setw(5) << "     Kilometers" << 
		setw(10) << "	            Miles" << endl;

	//Calculations

	for (kilometers = 40; kilometers <= 120; kilometers += 10)
	{
		milesPerHour = kilometers * 0.6213712;
		cout << right << setw(10) << kilometers;
		cout << setw(25) << milesPerHour << endl;
	}
	cout << endl;
	return 0;
	system("pause");
}
