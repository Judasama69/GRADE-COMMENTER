#include <iostream>
using namespace std;

int main()
{
	/*
		EQUIVALENT 
		97-100 | 1.0 	
		94-96  | 1.25
		91-93  | 1.50
		88-90  | 1.75
		85-87  | 2.0
		82-84  | 2.25
		79-81  | 2.50
		76-78  | 2.75
		73-75  | 3.0
	*/  
	int grade;
	string subject;
	
	cout << "Enter your subject: ";
	cin >> subject;
	
	cout << "Enter your subject's grade this semester: ";
	cin >> grade;
	
	cout << "\n" << subject << " " << "Final Semester Grade: " << endl;
	
	// Nested Else if Statement
	if (grade >= 97) {
		cout << "\n1.0 Flat 1 idol \n" << endl;
	} 
	
	else if (grade >= 94) {
		cout << "\n1.25 Nice grade \n" << endl;
	}
	
	else if (grade >= 91) {
		cout << "\n1.50 Not bad \n" << endl;
	}
	
	else if (grade >= 88) {
		cout << "\n1.75 Okay na na \n" << endl;
	}
	
	else if (grade >= 85) {
		cout << "\n2.0 Warm up pa ni \n" << endl;
	}
	
	else if (grade >= 82) {
		cout << "\n2.25 Atleast pasar \n" << endl;
	}
	
	else if (grade >= 79) {
		cout << "\n2.50 Importante naninoud ug nagtinarong kog skwela \n" << endl;
	}
	
	else if (grade >= 76) {
		cout << "\n2.75 Naa ra siguro koy kulang :)\n" << endl;
	}
	
	else if (grade >= 73) {
		cout << "\n3.0 bawal daw tres ang grado sa major sub :)\n" << endl;
	}
	
	else if (grade <= 72) {
		cout << "\nbawi next year pre :) \n" << endl;
	}
	
	return 0;
}
