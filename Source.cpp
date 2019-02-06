
     /***********************************************
* Name:Ridwan Alaoudi
* Email: alaoudir0@students.rowan.edu
***********************************************
* Purpose:
*  This program converts miles into kilos and calculate the circumference of a circle 
***********************************************/

#include <iostream>
#include <string>

using namespace std; 
int main()
{
	float fahrenheit, celsius;
	int age, months,days,hours,minutes,seconds;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " thi program convets the tempreture from Fahrenheit to Celsius " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input a tempreture in Celsius: ";
	cin >> celsius;

	//Compute the tempreture to Fahrenheit*
	fahrenheit=(1.8)*celsius+32;

	//Display the circumference
	cout << " the tempreture is  " << fahrenheit << " \n\n";
	cout << "Program has ended" << endl;
	
	cout << "*********************************************" << endl;
	cout << " this program ask the user to input their age and it converts their age into years, months,days,hours,mins and seconds  " << endl;
	cout << " ******************************************\n\n";
	
	cout << " What's your age? :     ";
	cin >> age; 
    months= age*12;
    days=age*365.25;
    hours=days*24;
    minutes=hours*60;
    seconds=minutes*60;
     
    cout << " you have lived for "<< months <<"  months  " << days << " days "<< hours << " hours "<< minutes << " minutes " << seconds <<" seconds " << "\n\n ";
    

	cout << "*********************************************" << endl;
	cout << " this program prints my first initial as a block letter " << endl;
	cout << " ******************************************\n\n";
    string dot="[*]";
    string space="[ ]";
    const int arraysize=6;
    string mygrid[arraysize][arraysize];
    for (size_t i=0; i<arraysize;i++)
    {
    mygrid[i][0]=dot;
    }

    for (size_t i=1; i<arraysize;i++)
    {
    mygrid[i][1]=space;
    }
    mygrid[0][1]=dot;
    
    mygrid[0][2]=dot;
    mygrid[1][2]=space;
    mygrid[2][2]=dot;
    mygrid[3][2]=dot;
    mygrid[4][2]=space;
    mygrid[5][2]=space;
    
    mygrid[0][3]=dot;
    mygrid[1][3]=space;
    mygrid[2][3]=dot;
    mygrid[3][3]=dot;
    mygrid[4][3]=space;
    mygrid[5][3]=space;
    
    mygrid[0][4]=space;
    mygrid[1][4]=dot;
    mygrid[2][4]=space;
    mygrid[3][4]=space;
    mygrid[4][4]=dot;
    mygrid[5][4]=space;


    for (size_t i=0; i<arraysize-1;i++)
    {
    mygrid[i][5]=space;
    }
    mygrid[5][5]=dot;

     for(size_t i =0; i < arraysize; i++)
     {
         for(size_t k =0; k < arraysize; k++)
         {
         cout<< mygrid[i][k]<< "";       // 
         }
         std::cout <<"\n";   // printing the following array 
     }
	system("pause");
	return 0;
}
    
    
    
     

