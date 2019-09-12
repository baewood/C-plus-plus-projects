//Write a program that calculates and displays a person's body mass index 
//(BMI). The BMI is often used to determine whether a person with a sedentary 
//lifestyle is overweight or underweight for his or her height. A person's 
//BMI is calculated with the following formula :

//BMI = weight × 703 / height 2
//where weight is measured in pounds and height is measured in inches.

//The program should display a message indicating whether the person has 
//optimal weight, is underweight, or is overweight.A sedentary person's weight 
//is considered to be optimal if his or her BMI is between 18.5 and 25. 
//If the BMI is less than 18.5, the person is considered to be underweight. 
//If the BMI value is greater than 25, the person is considered to be overweight.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "This program calculates a person's body mass index.\n\n";

	double bmi,
		weight,
		height;

	cout << "Enter weight (in pounds): ";
	cin >> weight;
	cout << "Enter height (in inches): ";
	cin >> height;

	bmi = (weight / pow(height, 2.0)) * 703;

	if (bmi < 18.5)
		cout << "\nYou are considered underweight." << endl;
	else if ((bmi >= 18.5) && (bmi <25))
		cout << "\nYou are at an optimal BMI." << endl;
	else if (bmi >= 25)
		cout << "\nYou are considered overweight." << endl;

	system("pause");
	return 0;
}