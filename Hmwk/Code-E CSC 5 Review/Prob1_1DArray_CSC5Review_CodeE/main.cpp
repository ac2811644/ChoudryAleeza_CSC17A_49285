/* 
 * File:   main.cpp
 * Author: Aleeza Choudry
 * Created on 9/14/20 11:34 AM
 * Purpose:  Sorting an array of characters if specified correctly
 */

//System Libraries Here
#include <iostream>//cout,cin
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int  read(char []);
void sort(char [],int);
void print(const char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn,sizeDet;//Number of characters to be read, check against length
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of characters and sort"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout<<"Now read the Array"<<endl;
    sizeDet=read(array);//Determine it's size
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet==sizeIn){
        sort(array,sizeIn); //Sort the array
        print(array,sizeIn);//Print the array
    }else{
        cout<<(sizeDet<sizeIn?"Input size less than specified.":
            "Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

//Read array and return its length function 
int read(char array[])
{
    cin>>array;
    return strlen(array);

}

//Sort array function 
void sort(char array[], int sizeIn)
{
    char key;
    for (int i=1; i<sizeIn; i++)
    {
        key = array[i];
        int j=i - 1;
    
    while (j>=0 && array[j] > key)
    {
        array[j+1]=array[j];
        j=j-1;
    }
    array[j+1]=key;
    }

}

//Print array function 
void print(const char array [], int sizeIn)
{
    for (int i=0; i<sizeIn; i++)
    cout<<array[i];
    cout<<endl;
}
