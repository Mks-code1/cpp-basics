#include <iostream>
using namespace std;


enum enWeekDay { Sun = 1, Mon  , Tue, Wed , Thu , Fri, Sat }; // اذا اعطينا قيمة اولى لاول ال enum رح يكمل يعطي قيم تلقائية مرتبة افضل من اني اعطي قيم 

void ShowDayminue() {
	cout << "***************************" << endl; 
	cout << "         Week Days            " << endl;
	cout << "***************************" << endl; 
	cout << "1: Sunday\n2: Monday\n3: Tuseday\n4: Wednesday\n5: Thursday\n6: Friday\n7: Satrday" << endl; 
	cout << "***************************" << endl;
	cout << "Please enter the number of the day: " << endl; 

}



enWeekDay ReadWeekDay() {
	enWeekDay weekday;
	int wd; 
	cin >> wd; 
	weekday = (enWeekDay)wd;
	return weekday; 
}



string GetWeekDayName(enWeekDay weekday) {

	switch (weekday) {
	case enWeekDay :: Sun :
		return "Sunday";
		break; 
	case enWeekDay ::Mon :
		return "Monday";
		break; 
	case enWeekDay :: Tue :
		return "Tuseday";
		break;
	case enWeekDay::Wed :
		return "Wednesday";
		break; 
	case enWeekDay :: Thu :
		return "Thursday";
		break; 
	case enWeekDay :: Fri :
		return "Friday";
		break; 
	case enWeekDay :: Sat:
		return "Satrday"; 
		break; 
	default :
		return "Error";
	}

	
}



int main() {

	ShowDayminue();
	string the_name_of_day = GetWeekDayName(ReadWeekDay());
	cout << "Today is " << the_name_of_day << endl; 

	return 0; 
}
