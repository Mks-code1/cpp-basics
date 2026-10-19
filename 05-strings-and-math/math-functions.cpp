#include <iostream> 
#include <cmath>
using namespace std;

int main() {
     

	// Exrcising of Math function : 

   // 1 : Rectangle area Through Diagonal and Side Area :
	//short int  a, d; 
	//
	//cout << "Enter A: " << endl; 
	//cin >> a; 
	//cout << "Enter D: " << endl; 
	//cin >> d; 

	//float Area = a * sqrt(pow(d, 2) - pow(a, 2));
	//cout << "Area = " << Area << endl; 

	//2 : Circle Area : 
 //   
	//double r; 
	//cout << "Enter r : " << endl;
	//cin >> r; 
	//const float pi = 3.14; 
	//float Area = pi * pow(r, 2);
	//cout << "Area = " << ceil( Area) << endl; 
 


	// 3: Circle Area Through Diameter

	//double d; 
	//cout << "Enter D: " << endl; 
	//cin >> d; 
	////
	//float Area = (pi * pow(d, 2)) / 4;
	//cout << "Area = " << ceil(Area) << endl; 


    // 4 :  Circle Area Inscribed in a Square 

	//short int a; 
	//cout << "Enter A : " << endl; 
	//cin >> a; 

	//float Area = (pi * pow(a, 2)) / 4; 
	//cout << "Area = " << ceil(Area) << endl;


    //5:  Circle Area Along the Circumference 
	//double l; 
	//cout << "Enter L: " << endl; 
	//cin >> l; 

	//double Area = pow(l, 2) / (4 * pi);
	//cout << "Area = " << floor(Area) << endl; 



   // 6: Circle Area Inscribed in an Isosceles Triangle   
	//double  a, b; 
	//cout << "Enter A: " << endl; 
	//cin >> a; 
	//cout << "Enter B: " << endl; 
	//cin >> b; 
	//double Area = (pi * (pow(b, 2) / 4)) * ((2 * a - b) / (2 * a + b)); 
	//cout << "Area = " << floor (Area) << endl; 



    // 7 :  Circle Area circle Described Around an Arbitrary Triangle 

	//double a, b, c; 
	//cout << "Enter A: " << endl; 
	//cin >> a; 
	//cout << "Enter B: " << endl; 
	//cin >> b; 
	//cout << "Enter C: " << endl; 
	//cin >> c;

	//double p = (a + b + c) / 2;
	//double Value = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));


	//double Area = pi * pow(Value, 2); 
	//cout << "Area = " << round (Area) << endl; 

    

	// 8 :  Power of 2,3,4  
 
	//short int num; 
	//cout << "Enter a num : " << endl; 
	//cin >> num; 

	//cout << pow(num, 2) << endl;
	//cout << pow(num, 3) << endl; 
	//cout << pow(num, 4) << endl; 



   
	// 9 : Power of M  

	//short int num, m; 
	//cout << "Enter a num : " << endl; 
	//cin >> num; 
	//cout << "Enter M: " << endl; 
	//cin >> m; 
	//cout << pow(num, m) << endl;


   
	// 10 : 
	//int days, hours, min, seconds; 
	//cout << "Enter the days: " << endl; 
	//cin >> days; 
	//cout << "Enter the hours: " << endl; 
	//cin >> hours; 
	//cout << "Enter the min : " << endl; 
	//cin >> min; 
	//cout << "Enter the seconds: " << endl; 
	//cin >> seconds; 

	//int secondsPerDays = days * 24 * 60 * 60;
	//int secondsPerHours = hours * 60 * 60; 
	//int secondsPerMin = min * 60; 
	//cout << round(secondsPerDays + secondsPerHours + secondsPerMin + seconds) << endl;





    // 11 : 
    int seconds; 
	int dayPerseconds = 24 * 60 * 60; 
	int hourPerseconds = 60 * 60; 
	int minPersecinds = 60; 
    
	 
	cout << "Enter the seconds: " << endl; 
	cin >> seconds; 

	int days = seconds / dayPerseconds; 
	int reminder = seconds % dayPerseconds;

	int hours = reminder / hourPerseconds; 
	reminder = reminder % hourPerseconds;

	int minutes = reminder / minPersecinds; 
	reminder = reminder % minPersecinds; 
	int totals_Of_seconds = reminder; 
	cout << days << ":" << hours << ":" << minutes << ":" << totals_Of_seconds << endl; 



















	return 0; 
}
