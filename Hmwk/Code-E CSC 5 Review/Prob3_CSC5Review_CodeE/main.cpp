/* 
 * File:   main.cpp
 * Author: Aleeza Choudry 
 * Created on 9/17/20 4:00pm
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}

//Read array of integers function 
void read(int array[], int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
}

//Find sum, max, and min function
int stat(const int array[], int size, int& max, int& min)
{
    int sum=0;
        max=0;
        min=0;
    
    for (int i=0;i<size;i++)
    {
        sum+=array[i];
        
        if(i==0)
        {
            max=min=array[i];
        }
        else
        {
            if(array[i]>max)
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    return sum;
    
}

//Print results function
void print(const int array[], int size, int sum,int max, int min)
{
    for(int i=0;i<size;i++)
    {
        cout<<"a["<<i<<"] = " <<array[i]<<endl;
    }
    
    cout<<"Min  = "<<min<<endl;
    cout<<"Max  = "<<max<<endl;
    cout<<"Sum  = "<<sum<<endl;
    
}