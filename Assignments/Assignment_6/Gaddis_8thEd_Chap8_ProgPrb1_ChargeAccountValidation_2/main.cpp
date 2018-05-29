/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on May 26, 2018, 12:06 PM
 * Purpose: CPP Template
 *          To be copied for each project
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes
void mrkSort1(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
   //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=90000;
    int a[SIZE],b[SIZE],c[SIZE];
    
    //Initialize Variables
    fillAry(a,SIZE);
    copy(b,a,SIZE);
    copy(c,a,SIZE);
    
    //Process
    mrkSort1(a,SIZE);
    //Exit program!
    return 0;
}

void mrkSort1(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}