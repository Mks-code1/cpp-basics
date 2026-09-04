#include <iostream>
using namespace std; 


struct strinfo {
	string FisrtName; 
	string LastName;
	short int Age; 
	string PhoneNumber; 

}; 

void ReadData(strinfo &Info) {

	cout << "Enter Your first name: " << endl; 
	cin >> Info.FisrtName; 
	cout << "Enter your last name: " << endl; 
	cin >> Info.LastName; 
	cout << "Enter Your age: " << endl;
	cin >> Info.Age; 
	cout << "Enter your Phone Number: " << endl;
	cin >> Info.PhoneNumber; 
}

void printData(strinfo Info) {

	cout << "********************************************" << endl;
	cout << "Fisrt Name: " << Info.FisrtName << endl;
	cout << "Last Name: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone Number: " << Info.PhoneNumber << endl;
	cout << "********************************************" << endl;

}

void Rread_persons_info(strinfo Person[3]) {  

	ReadData(Person[1]);
	ReadData(Person[2]);



}

void Print_persons_info(strinfo person[3]) {

	printData(person[1]);
	printData(person[2]);


}

int main() {

	strinfo person[3];

	Rread_persons_info(person);
	Print_persons_info(person);

}







