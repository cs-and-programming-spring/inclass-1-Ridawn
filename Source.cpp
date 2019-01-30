


/***********************************************
* Name:Ridwan Alaoudi
* Email: alaoudir0@students.rowan.edu
***********************************************
* Purpose:
*  This program converts miles into kilos and calculate the circumference of a circle 
***********************************************/

#include <iostream>


using namespace std; 

const  float PI = 3.14159;

int main()
{

	float miles, kilos, radus, circumference;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " this program converts miles into kilos" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input distance in miles: ";
	cin >> miles;
	
	//convert miles into kilometers 
	kilos =miles/1.6; 
	
	//Display kilometers and converting them to meters and centimeters 
	cout << "there are  " << kilos << " kilometers in " <<miles<< " miles \n\n"; 
	cout << "there are  " << kilos *1000 << " meters  and  " << kilos *100000<< " centimeters in " << miles << " miles \n\n";
	cout << "Program has ended"<<endl;

	

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " this program calculates the circumference of a circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input a radius: ";
	cin >> radus;

	//Compute circumference from radius*
	circumference = radus *2* PI;

	//Display the circumference
	cout << " the circumference is  " << circumference << " \n\n";
	cout << "Program has ended" << endl;

	system("pause");
	
	return 0;
}


