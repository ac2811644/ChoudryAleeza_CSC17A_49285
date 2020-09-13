/* 
 * File:   main.cpp
 * Author: Aleeza Choudry
 * Created on September 7, 2020, 5:58 PM
 * Purpose:  Gaddis 8th Edition Ch. 3 
 *           Problem 12 - Convert temperatures
 *           from Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//Execution of Code Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables for this function 
    //F represents Fahrenheit, C represents Celsius
    float F;
    float C;
        
    // Ask user to enter Celsius temperature 
    cout << "Enter the temperature in degrees Celsius: ";
    // Store the user input in the variable C
    cin >> C;
    
    //Process Inputs to Outputs -> Mapping Process
    //Calculate temperature in Fahrenheit using the formula below
    F = ((9.0 / 5.0) * C) + 32;
    
    //Display the Fahrenheit temperature
    cout<<"The temperature in degrees Fahrenheit is: "<< F << endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

