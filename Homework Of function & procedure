#include <iostream>
#include <string>
using namespace std; 

//1
void my_name() {

	cout << "Welcome Mr.Mohamed kaser Saadalden" << endl;
}

//2
string name_of_people() {
	string name; 
	cout << "Enter your name: " << endl; 
	getline(cin, name); 
	return  "Welcome Mr/Miss " + name;

}

//3 Rectangle area Through Diagonal and Side Area : 
float Rectangle_area(float a, float d) {

	float Area = a * sqrt((pow(d, 2) - pow(a, 2)));
    

	return Area;
}

//4 Triangle Area 
float Triangle_Area(float a, float  h) {

	float Area1 = (a * h) / 2;

	return Area1;
}


// 5 Rectangle Area 

float Rectangle_Area(float a , float  b) {

	float Area = a * b; 
	return Area; 


}

// 6 Swaping numbers :
void  Swap_numbers() {
	short int num1, num2; 

	cout << "Enter num1: " << endl; 
	cin >> num1; 
	cout << "Enter num2: " << endl; 
	cin >> num2; 

	short int empty; 
	empty = num1; 
	num1 = num2; 
	num2 = empty; 
	cout << "the numbers after swaping : " << num1 << " | " << num2 << endl;


}



//7 Circle Area :
float Circle_area(float r) {

	const float pi = 3.14; 
	float area = pi * pow(r, 2);

	return area; 
}

//8 Circle Area Through Diameter : 

float Circle_Area_Through_Diameter(float d ) {

	const float pi = 3.14; 
	float area = pi * pow(d, 2) / 4;

	return area;
}


// 9   Circle Area Inscribed in a Square : 
float  Circle_Area_Inscribed_in_aS(float A) {
    
	const float pi = 3.14; 
	float  Area = pi * pow(A, 2) / 4; 

	return Area; 

}

// 10  Circle Area Along the Circumference 
float Circle_area_along_the_circumference(float L) {

	const float pi = 3.14; 
	float Area = pow(L, 2) / (4 * pi);

	return Area; 

}




//11 Circle Area Inscribed in an Isosceles Triangle : 
float Circle_Area_Inscribed_in_an_Isosceles_Triangle(float a, float b ) {

	const float  pi = 3.14; 
	float area = (pi * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	return area; 
}


// 12 Circle Area circle Described Around an Arbitrary Triangle 

float Circle_Area_circle_Described_around_an_AT(float a , float b , float c ) {

	const float pi = 3.14; 
	float p = (a + b + c) / 2;
	float X = (a * b * c) / (4 * sqrt( p * (p - a) * (p - b) * (p - c) ) );
	double area = pi * pow(X, 2);



	return area; 

}


// 13 Power of 2,3,4: 

void powers_of_num(short int num) {
   
	cout << "Power of 2 = " << pow(num , 2) << endl; 
	cout << "Power of 3 = " << pow (num, 3) << endl; 
	cout << "Power of 4 = " << pow(num, 4) << endl; 
 
}

// 14  Power of M 
void  Power_of_M(short int num , short int M) {

	cout << "Number: " << num << " & power: " << M << " = " << pow(num, M) << endl;

}

// 15 Task Duration In Seconds: 
int Task_Duration_In_Seconds(short int days, short int hours, short int minutes, short int seconds) {

	int to_seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + (seconds);

	return to_seconds;
}

// 15 Seconds to Days Hours Minutes Seconds:
void Seconds_to_Days_Hours_Minutes_Seconds(int totalOfSeconds) {

	const int seconds_per_days = 24 * 60 * 60; 
	const int secodns_per_hours = 60 * 60; 
	const int seconds_per_minutes = 60; 

	short int day_perSeconds = totalOfSeconds / seconds_per_days;
	int reminder = totalOfSeconds % seconds_per_days; 
	short int hours_per_seconds = reminder / secodns_per_hours; 
	reminder = reminder % secodns_per_hours; 
	short int min_per_seconds = reminder / seconds_per_minutes; 
	reminder = reminder % seconds_per_minutes; 
	
	cout << "Days:" << day_perSeconds << " " << "Hours:" << hours_per_seconds << " " << "Minutes: " << min_per_seconds << " " << "Seconds: " << reminder << endl; 
}

int main() {
      
	Seconds_to_Days_Hours_Minutes_Seconds(193535);
	


		return 0; 
}
