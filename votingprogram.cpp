// Program to allow people above 18 years of age to vote
#include <iostream>
#include <string>

using namespace std;
// The main function
int main(){
	// declaration of variables
	string name;
	int age;

	// Prompting user to enter their name
	cout<< "Enter your name: "<< endl;
	getline(cin, name);

	// Prompting the user to enter their age
	cout<< "Enter your age: "<< endl;
	cin>> name;

	// Checking whether the user is above 18 years
	if (age >= 18){
		cout << "Eligible to vote"<< endl;
	}
	else{
		cout<< "Ineligible to vote"<< endl;
	}
	return 0;
}
// End of the program
