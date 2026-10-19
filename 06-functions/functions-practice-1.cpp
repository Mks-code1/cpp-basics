#include <iostream>
using namespace std; 
// Home work of Functions: 


void stars_line() {

	cout << "*****************************************" << endl; 
}


void my_info() {
  
	cout << "Name: Mohamed kaser." << endl; 
	cout << "Age: 20 Years old." << endl; 
	cout << "City: Homs. " << endl; 
	cout << "Country : Syria. " << endl; 
}


void square_stars() {

	cout << "*******" << endl; 
	cout << "*******" << endl;
	cout << "*******" << endl;
	cout << "*******" << endl;
}

void I_love_programming() {

	cout << "I LOVE PROGRAMMING" << endl; 
	cout << "I PROMIS TO BE THE BEST DEVOLPER EVER!" << endl;

}


void print_H() {

	cout << "*   *" << endl; 
	cout << "*   *" << endl; 
	cout << "*****" << endl; 
	cout << "*   *" << endl; 
	cout << "*   *" << endl; 

 
}

int main() {


	stars_line();
	my_info(); 
	stars_line();

	cout << "\n" << endl;
	square_stars();
	cout << "\n" << endl;

	I_love_programming();
	cout << "\n" << endl;

	print_H();

	return 0; 
}
