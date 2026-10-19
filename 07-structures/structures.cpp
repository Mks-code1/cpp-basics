#include <iostream> 
using namespace std; 


struct Stsalary {

	float monthly_salary; 
};


struct StContact_info {

	string phone_num; 
	string email; 
    
};

struct Stadrees {

	string country_live_in; 
	string the_city; 
	string street; 

};

struct all_info {

	string name; 
	short int age; 
	string city; 
	string country; 
	char gender;
	bool is_married;
	Stsalary Salary; 
	StContact_info contact_info;
	Stadrees Adrees;

};

int main() {

	all_info person ;


	cout << "Enter youe name: " << endl; 
	cin >> person.name; 
	
	cout << "Enter your age: " << endl; 
	cin >> person.age;
	
	cout << "Enter your City: " << endl;
	cin >> person.city;

	cout << "Enter Your country: " << endl; 
	cin >> person.country;

	cout << "Enter your Gender: " << endl; 
	cin >> person.gender;

	cout << "Are you married: " << endl; 
	cin >> person.is_married;

	cout << "Enter your monthly salary: " << endl; 
	cin >> person.Salary.monthly_salary; 

	cout << "Enter the country you live curenntly: " << endl;
	cin >> person.Adrees.country_live_in;
	cout << "Enter curenntly city: " << endl;
	cin >> person.Adrees.the_city;
	cout << "Enter the street where you live:" << endl; 
	cin >> person.Adrees.street;


	cout << "Enter your phone number: " << endl;
	cin >> person.contact_info.phone_num;

	cout << "Enter your Email: " << endl; 
	cin >> person.contact_info.email;
	
	cout << "**************************************************" << endl; 
	cout << "Name: " << person.name << endl;
	cout << "Age: " << person.age << endl;
	cout << "City: " << person.city << endl;
	cout << "Country: " << person.country << endl;
	cout << "Monthly Salary: " << person.Salary.monthly_salary << endl;
	cout << "Yearly salary: " << person.Salary.monthly_salary * 12 << endl;
	cout << "Gender: " << person.gender << endl;
	cout << "Married: " << person.is_married << endl;
	cout << "----------Contact Information & Adrees----------" << endl; 
	cout << "Creently Country: " << person.Adrees.country_live_in << endl;
	cout << "Creently City: " << person.Adrees.the_city << endl;
	cout << "The Street: " << person.Adrees.street << endl;
 	cout << "Phone Number: " << person.contact_info.phone_num << endl;
	cout << "Email: " << person.contact_info.email << endl;
	cout << "**************************************************" << endl;
		 



	return 0; 
}











