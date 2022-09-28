// Your Name: Brian Henson
// Date: 9-23-2022
// Program Title: Body fat calculator
// Program Description: Calculated someone's body fat using various measurements

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;

// Named constants

int main()
{

	// Variable declaration
	int choice, weight, wrist, waist, hip, forearm;
	int a1, a2, a3, a4, a5, b, bodyFat, bodyFatPerc;

	// Declare file stream variables
	ifstream inData;
	ofstream outData;

	//Open the input and output files
	inData.open("bodyFat.txt");
	outData.open("bodyFatOutput.out");

	//Program title and description for the user
	cout << "Program Title: Body fat calculator" << endl;
	cout << "Program Description: Calculated someone's body fat using various measurements" << endl;

	// User input
	cout << "Are you male or female?" << endl;
	cout << "1 - Male" << endl;
	cout << "2 - Female" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << endl;

	// Output to the screen
	if (choice == 1)
	{
		cout << "What is your body weight?" << endl;
		cin >> weight;
		cout << "What is your wrist measurement at the fullest point?" << endl;
		cin >> wrist;
		cout << endl;

		a1 = (weight * 1.082) + 94.42;
		a2 = wrist * 4.15;
		b = a1 - a2;
		bodyFat = weight - b;
		bodyFatPerc = (bodyFat * 100) / weight;

		cout << "Please check bodyFatOutput.out for results" << endl;
		outData << "Your percentage of body fat is: " << bodyFatPerc << endl;

		//Closing the files
		inData.close();
		outData.close();
	}

	else if (choice == 2)

	{
		cout << "What is your body weight?" << endl;
		cin >> weight;
		cout << "What is your wrist measurement at the fullest point?" << endl;
		cin >> wrist;
		cout << "What is your waist measurement at the navel?" << endl;
		cin >> waist;
		cout << "What is your hip measurement at the fullest point?" << endl;
		cin >> hip;
		cout << "What is your forearm measurement at the fullest point?" << endl;
		cin >> forearm;
		cout << endl;

		a1 = (weight * 0.732) + 8.987;
		a2 = wrist / 3.14;
		a3 = waist * 0.157;
		a4 = hip * 0.249;
		a5 = forearm * 0.434;
		b = a1 + a2 - a3 - a4 + a5;
		bodyFat = weight - b;
		bodyFatPerc = (bodyFat * 100) / weight;

		cout << "Please check bodyFatOutput.out for results" << endl;
		outData << "Your percentage of body fat is: " << bodyFatPerc << endl;

		//Closing the files
		inData.close();
		outData.close();
	}
	else
		cout << "Input invalid, terminating program." << endl;

	return 0;
}