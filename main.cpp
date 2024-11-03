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
	
	cout << "Enter your grade this semester: ";
	cin >> grade;
	
	// Nested Else if Statement
	if (grade >= 97) {
		cout << "\nFlat 1 idol \n" << endl;
	} 
	
	else if (grade >= 93 ) {
		cout << "\nNice grade ;) \n" << endl;
	}
	
	else if (grade >= 90) {
		cout << "\nNot bad :) \n" << endl;
	}
	
	else if (grade >= 87) {
		cout << "\nOkay na na \n" << endl;
	}
	
	else if (grade >= 84) {
		cout << "\nWarm up pa ni \n" << endl;
	}
	
	else if (grade >= 81) {
		cout << "\nAtleast pasar \n" << endl;
	}
	
	else if (grade >= 78) {
		cout << "\nImportante naninoud ug nagtinarong kog skwela \n" << endl;
	}
	
	else if (grade >= 75) {
		cout << "\nNaa ra siguro koy kulang :)\n" << endl;
	}
	
	else if (grade <=74) {
		cout << "\nShift course nlng pre :) \n" << endl;
	}
	
	system("pause");
	system("cls");
	return main();
}