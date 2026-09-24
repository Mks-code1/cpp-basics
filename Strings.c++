#include <iostream>
#include <string>
using namespace std; 
//HOMEWORK : 
int main() {
	string name;  // Your name must be above 10 cahr
	cout << "Pleas Enter name : " << endl; 
	getline(cin, name); 

	string S1, S2; 
	cout << "Enter String1 : " << endl; 
	cin >> S1; 
	cout << "Enter String2 :" << endl; 
	cin >> S2; 
	 
	cout << "*********************************" << endl; 
	cout << "The length of the name is : " << name.length() << endl; 
	cout << "Cahrcters at 0,2,4,7 are : " << name[0] << " " << name[2] << " " << name[4] << " " << name[8] << endl; 
	cout << "concatenating Sting1 and String2 : " << S1 + S2 << endl;
	int Result = stoi(S1) * stoi(S2); 
	cout << S1 << " * " << S2 << "= " << Result << endl; 















	return 0; 
}
