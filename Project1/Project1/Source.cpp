/*
Colin Durocher - 9/27/2017 3
Assignment Name : Program problem 2
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)
	int age;
	char name;
	bool in_physics;
	double favorite_number;
	cout << "What age are you \n";
		cin >> age;
	cout << "What is the first letter in your first name \n";
		cin >> name;
	cout << "Are you in physics? 1=yes 0=no \n";
		cin >> in_physics;
	cout << "what is your favorite number \n";
		cin >> favorite_number;
	// Display Text
	cout << "your age is " << age << "\n";
	cout << "your name is " << name << "\n";
	cout << "Your are in physics. " << in_physics << "\n";
	cout << "your favorit number is " << favorite_number << "\n";
	pause(); // pauses to see the displayed text
}