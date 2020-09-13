/* 
 * File:   main.cpp
 * Author: Aleeza Choudry
 * Created on September 7, 2020, 7:11 PM
 * Purpose:  Gaddis 8th Edition Ch. 3 
 *           Problem 13 - Currency
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip> //for setprecision() manipulator 
using namespace std;

//Global Constants to store conversion factors
// the values below represent currency exchange rates
float YENPERDOLLAR = 106.27; 
float EUROSPERDOLLAR = 0.85;

//Execution of Code Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables for this function  
    float amtInp, //represents the user's entered amount
          yenConv,  //represents the amount converted to Yen
          euroConv; //represents the amount converted to Euros
    
    //Prompt user to enter amount in dollars
    cout << "Enter the amount in U.S. dollars: $ ";
    //Read from keyboard and store in variable amtInp
    cin >> amtInp;
    
    //Process Inputs to Outputs -> Mapping Process
    // Convert inputted amount to Yen and Euros
    yenConv = amtInp * YENPERDOLLAR;
    euroConv = amtInp * EUROSPERDOLLAR;
    
    //Format and display output 
    // (fixed-point notation, two decimal places precision, show decimal point) 
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "\nYen amount: " << "¥ " << yenConv;
    cout << "\nEuro amount: " << "€ " << euroConv << endl;  
    
    return 0;
}

