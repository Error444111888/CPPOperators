// My introduction to C++ Operators 2 test - Pasha
// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::endl;



int main()
{
	

	char response = 'n';
	if (response == 'y' || response == 'Y')

		cout << "Positive response received" << endl;
		cout << "Your progres has been saved" << endl;

		cout << "You did notchose y or Y" << endl;
		cout << "Your progress has not been saved" << endl;


		


	cin.get();

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
