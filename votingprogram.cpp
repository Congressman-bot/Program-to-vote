#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	int age;
	
	std::cout<< "Enter your name: "<< endl;
	getline(cin, name);
	
	std::cout<< "Enter your age: "<< endl;
	std::cin>> name;
	
	if (age >= 18){
		std::cout << "Eligible to vote"<< endl;
	}
	else{
		std::cout<< "Ineligible to vote"<< endl;
	}
	return 0;
}
