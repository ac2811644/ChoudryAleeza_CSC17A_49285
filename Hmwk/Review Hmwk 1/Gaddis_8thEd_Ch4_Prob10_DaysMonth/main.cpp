/* 
 * File:   main.cpp
 * Author: Aleeza Choudry
 * Created on September 7, 2020, 8:15 PM
 * Purpose:  Gaddis 8th Edition Ch. 4 
 *           Problem 10 - Days in a Month
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//Execution of Code Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables for this function  
    int month, //represents the month
        year;  //represents the year
    
    //Prompt user to enter a month
    cout << "Enter a month (1-12): ";
    //store input in the variable month
    cin >> month;
    //Prompt user to enter a year
    cout << "Enter a year: ";
    //store input in the variable year
    cin >> year;
    
    //Process Inputs to Outputs -> Mapping Process
    //switch statement that displays output depending on user's entered month 
    switch(month){
        case 1: //January 
            cout << "\n31 days";
            break;
        case 2: //if user enters February, determine whether it is a leap year
            if(year % 100 == 0) // test if divisible by 100
            {
                //if also divisible by 400, then it's a leap year
                 if(year % 400 == 0) 
                    cout << "\n29 days" << endl;
                 else 
                    cout << "\n28 days" << endl;
            }
            else if(year % 100 != 0) 
             // if not divisible by 100, then test if divisible by 4
            {
                if(year % 4 == 0) // if divisible by 4, then it is a leap year
                    cout << "\n29 days" << endl;
                else 
                    cout << "\n28 days" << endl;
            }
            break;
        case 3: //March
            cout << "\n31 days";
            break;
        case 4: //April
            cout << "\n30 days";
            break;
        case 5: //May
            cout << "\n31 days";
            break;
        case 6: //June
            cout << "\n30 days";
            break;
        case 7: //July
            cout << "\n31 days";
            break;
        case 8: //August   
            cout << "\n31 days";
            break;
        case 9: //September
            cout << "\n30 days";
            break;
        case 10: //October   
            cout << "\n31 days";
            break;
        case 11: //November
            cout << "\n30 days";
            break;
        case 12: // December    
            cout << "\n31 days";
            break;
    
    //input validation  
    default: cout << "Month or year out of range. Run program again." << endl;   
    }
    
    //Exit stage right
    return 0;
}

