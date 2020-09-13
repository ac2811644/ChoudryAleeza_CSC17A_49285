/* 
 * File:   main.cpp
 * Author: Aleeza Choudry
 * Created on September 7, 2020, 11:00 PM
 * Purpose:  Gaddis 8th Edition Ch. 6
 *           Problem 7 - Celsius Temperature Table 
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

 double celsius(double F); //Declare the function celsius 

 //Declare the constants MIN (temperature) and MAX (temperature)
  const int MIN = 0,
            MAX = 20;
 
//Execution of Code Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables for this function  
    double C;         
    
    //Create a table
    cout << "-------------------------------------\n";
    cout << "Fahrenheit         |   Celsius       \n";
    cout << "-------------------------------------\n";
    
    //Use a for loop for initialization, test expression, and incrementation
    for (int F = MIN; F <= MAX; F++)
    {
        C = celsius(F);
        
        cout << "F" << "                 ";
        cout << "C" << endl;
        
    }
    
    return 0;
}

//Function implementations 
double celsius(double F)
{
    return(5.0 / 9.0 ) * (F - 32.0);
}