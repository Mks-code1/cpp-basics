#include <iostream> 
using namespace std; 


enum enColor { Red, Blue, yallo, Green };
enum enGender {Male, Famale};
enum  enMaritlaStutus {Single , Married};



struct stAddress {
	string streetName; 
	string BuildingNum; 
	string POBox; 
	string Zipcode;
};



struct stContact_info {
	string phone_number; 
	string Eamil;
	stAddress Address; 
};


struct stPerson {

	string FirstName;
	string LastNam;
	short int age; 
	stContact_info ContactInfo;
	enColor Color; 
	enGender Gender;
	enMaritlaStutus MaritalStutus; 

	
};



int main() {
	stPerson Person1;


	Person1.FirstName = "Mohamed";
	Person1.LastNam = "Saadalden";
	Person1.age = 20; 
	Person1.Gender = enGender::Male;
	Person1.MaritalStutus = enMaritlaStutus::Single;
	Person1.Color = enColor::Blue;
	Person1.ContactInfo.phone_number = "0562424386";
	Person1.ContactInfo.Eamil = "moha@moha.com";
	Person1.ContactInfo.Address.streetName = "Wadi Hael";
	Person1.ContactInfo.Address.BuildingNum = "8";
	Person1.ContactInfo.Address.POBox = "7777";
	Person1.ContactInfo.Address.Zipcode = "111988";
 



	cout << "******************************************************" << endl;
	cout << "Name: " << Person1.FirstName + " " + Person1.LastNam << endl;
	cout << "Age: " << Person1.age << endl;  



	return 0; 

}
