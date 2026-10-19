#include <iostream>
using namespace std; 


enum enScreenColor {Red=1 ,Blue=2 , Green=3 , Yellow = 4 };

enum enCountry {Syria= 1 , Saudi_Arabia= 2 , Jordan= 3 , Egypt = 4, other = 5 };



int main() {

	cout << "***********************************************" << endl; 
	cout << "Enter the num of the country: " << endl; 
	cout << "1:Syria\n2:Saudi_Arabia\n3:Jordan\n4:Egypt\n5:Other\n";
	cout << "***********************************************" << endl;
	cout << "Enter here : " << endl; 
	short int num_of_country; 
    
	enCountry country; 
	cin >> num_of_country; 
	country = (enCountry)num_of_country;
	if (country == enCountry::Syria) {
		cout << "Your country is :Syria" << endl; 

	}
	else if (country == enCountry::Saudi_Arabia) {
		cout << "Your country is: Saudi_Arabia" << endl; 

	}

	else if (country == enCountry::Jordan) {
		cout << "Your country is: Jordan"  << endl; 

	}
	else if (country == enCountry::Egypt) {
		cout << "Your country is: Egypt "<< endl; 

	}

	else {
		cout << "Your country is: other "  << endl; 
	}




















	//cout << "**********************************************" << endl; 
	//cout << "Please Chose the number of your color: \n"; 
	//cout << "(1) Red\n"; 
	//cout << "(2) Blue\n"; 
	//cout << "(3) Green\n"; 
	//cout << "(4) Yellow\n";
	//cout << "**********************************************" << endl;
	//cout << "Your Choise? " << endl; 

	//short int c; 
	//enScreenColor Color; 

	//cin >> c; 
	//Color = (enScreenColor)c; 

	//if (Color == enScreenColor::Red) {
	//	system("Color 4F"); 
	//}
	//else if (Color == enScreenColor::Green) {
	//	system("Color 2F");
	//}
	//else if (Color == enScreenColor::Blue) {
	//	system("Color 1F"); 
	//}
	//else if (Color == enScreenColor::Yellow) {
	//	system("Color 6F");
	//}

	//else {
	//	cout << "Must choose color........"; 
	//}

}
