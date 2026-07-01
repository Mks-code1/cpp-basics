#include <iostream> 
using namespace std;


int main() {

	 //1 : 
	string name; 
	int age; 
	string city; 
	string country; 
	float monthly_salary; 
	float yearly_salary; 
	char Gender; 
	bool isMarried; 


	cout << "Enter Your Name: " << endl; 
	cin >> name;

	cout << "Enter Youe Age: " << endl; 
	cin >> age; 

	cout << "Enter Your City: " << endl; 
	cin >> city; 

	cout << "Enter Your Country: " << endl; 
	cin >> country; 

	cout << "Enter Your Monthly-Salary: " << endl; 
	cin >> monthly_salary; 

	cout << "Enter Your Yearly-Salary: " << endl; 
	cin >> yearly_salary; 

	cout << "Enter Your Gendert (M/F): " << endl; 
	cin >> Gender; 

	cout << "Are You Mariied (True / False): " << endl; 
	cin >> isMarried; 

	cout << "***********************************" << endl; 
	cout << "Name: " << name << endl; 
	cout << "Age: " << age << endl; 
	cout << "City: " << city << endl; 
	cout << "Country: " << country << endl; 
	cout << "Monthly-Salary: " << monthly_salary << "$" << endl; 
	cout << "Yearly-Salary: " << yearly_salary << "$" << endl; 
	cout << "Gender: " << Gender << endl; 
	cout << "Married: " << isMarried << endl; 
	cout << "***********************************" << endl;



    // 2 : 
	int a; 
	int b; 
	int c; 


	cout << "Enter num1: " << endl; 
	cin >> a; 
	
	cout << "Enter num2: " << endl; 
	cin >> b; 
	 
	cout << "Enter num3: " << endl; 
	cin >> c; 

	cout << a << "+" << endl; 
	cout << b << "+" << endl; 
	cout << c << endl;
	cout << "___________________________________________" << endl; 
	cout << "Total: " << a + b + c << endl; 




	// 3: 
	int age; 
	cout << "Enter your age: " << endl; 
	cin >> age; 
	cout << "Your age after 5 years will be " << age + 5 << endl; 




	return 0; 
}
