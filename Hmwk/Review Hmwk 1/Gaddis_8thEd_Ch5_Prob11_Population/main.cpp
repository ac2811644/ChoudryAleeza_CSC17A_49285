/* 
 * File:   main.cpp
 * Author: Aleeza Choudry
 * Created on September 7, 2020, 10:00 PM
 * Purpose:  Gaddis 8th Edition Ch. 5 
 *           Problem 11 - Population
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//Execution of Code Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables for this function  
    float startNum; //represents the starting number of organisms
    float avgInc;  //represents the average daily population increase 
    int numDays; // represents the number of days they will multiply     
    
    //Prompt user to enter the starting number of organisms
    cout << "Enter the starting number of organisms: ";
   
    //Input validation for storing input in the variable startNum
    while (!(cin >> startNum) || startNum < 2){
        
        cout << "Error. The starting number must be 2 or greater.\n";
        cout << "Enter the starting number of organisms: ";
    }
        
    //Prompt user to enter the average daily population increase 
    cout << "Enter the average daily population increase (as a percentage): ";
  
    // Input validation for storing input in the variable avgInc
    while (!(cin >> avgInc) || avgInc < 0){
        
        cout << "Error. The average daily population increase must be a" <<
                " positive value.";         
        cout << "Enter the average daily population increase as a percentage: ";
    }
    
    avgInc *= .01; // for calculating average daily population increase
    
    //Prompt user to enter the number of days they will multiply
    cout << "Enter the number of days to multiply: ";
    
    //Input validation for storing input in the variable numDays
    while (!(cin >> numDays) || numDays < 1){
        
        cout << "Error. Number of days to multiply cannot be less than 1.\n";
        cout << "Enter the number of days to multiply: ";
    }
    
    for(int i = 0; i < numDays; i++) //initialize, test expression, increment
    {
        cout << "\nThe population size for day " << (i + 1);
        cout << " is: " << startNum << endl;
        
        startNum += (startNum * avgInc); // setting the iterations     
    }
    
    //Exit stage right
    return 0;
    
}