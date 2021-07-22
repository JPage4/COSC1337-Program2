//***************************************************************
//
//  Developer:         Jessica Page	
//
//  Program #:         Program 2
//
//  File Name:         Program2.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          6/11/2021
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapte 2
//
//  Description:
//     This program will calculate and display how much annual 
// property tax the homeowner will be charged for their
// property
//
//***************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void developerInfo();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    double actualValue;				//declares variable that will store user's input
    double taxRate;


    cout << "Please enter the actual value of your house: ";			//gets user's input
    cin >> actualValue;											   // stores user's input

    cout << "Please enter the current tax rate: ";
    cin >> taxRate;

    double assessedValue = actualValue * 0.6;				//Assesed value is 60% of actual value of house
    double annualPropertyTax = taxRate * (assessedValue / 100.00);				//tax is collected for each $100 of assessed value of house

    //Displays actual value, assessed value, tax rate and annual taxes
    cout << "Actual Value: $" << fixed << setprecision(2) << actualValue << endl;
    cout << "Assessed Value: $" << fixed << setprecision(2) << assessedValue << endl;
    cout << "Tax Rate: $" << fixed << setprecision(2) << taxRate << endl;
    cout << "Annual Property Tax: $" << fixed << setprecision(2) << annualPropertyTax << endl;

    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************

void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: Two"
        << endl
        << endl;
} // End of developer
