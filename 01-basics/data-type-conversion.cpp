#include <iostream>
#include <string>
using namespace std; 

int main() {
	// Data Type Conversion : 
	int num1; 
	double num2 = 10.18; 
	// from double to int  
	num1 = num2; //  Implicit convesion from double to int ** Data los
	num1 = (int)num2; //Explicit conversion 
	num1 = int(num2); // Explixit conversion 
	cout << num1 << endl;

	// Convesion Frome String to int , double , float  : we use The function (stoi():):
    
	string str = "123.832"; 
	//for String to int
	int str_to_int = stoi(str); 

	//from string to float
	float str_to_float = stof(str);
	
	// from string to souble
	double str_to_double = stod(str);

	cout << "Num int = " << str_to_int << endl;
	cout << "Num float = " << str_to_float << endl; 
	cout << "Num double = " << str_to_double << endl; 


	//from int or double to String : 

	int Num1 = 10; 
	double Num2 = 19.99;
    string st1, st2; 
	st1 = to_string(Num1);
	st2 = to_string(Num2);

	cout << Num1 << endl; 
	cout << Num2 << endl; 

	return 0; 

}


//Homework: 
#include <iostream> 
#include <string>
using namespace std; 


int main() {

	//Write a program to do the following :


   //•1 Convert string st1 = "43.22" to double, float, and int.
	string str = "43.22";
	int str_to_int = stoi(str);
	cout << "String to int : " << str_to_int << endl; 
	double str_to_double = stod(str);
	cout << "String to double : " << str_to_double << endl;
	float str_to_float = stof(str);
	cout << "String to float : " << str_to_float << endl; 

   //•2 Convert integer N1 = 20 to string.
	int num1 = 20; 
	string num1_to_str = to_string(num1);
	cout << "Int to string : " << num1_to_str << endl;
   //•3 Convert double N2 = 33.5 to string.
	double n2 = 33.5; 
	string n2_tostr = to_string(n2);
	cout << "From double to string : " << n2_tostr << endl;

   //•4 Convert float N3 = 55.23 to string, and integer.
	float N3 = 55.23; 
	string N3_to_string = to_string(N3);
	int N3_to_int = int(N3);
	cout << "From float to String : " << N3_to_string << endl; 
	cout << "From float to Int : " << N3_to_int << endl;
 	return 0; 
}




