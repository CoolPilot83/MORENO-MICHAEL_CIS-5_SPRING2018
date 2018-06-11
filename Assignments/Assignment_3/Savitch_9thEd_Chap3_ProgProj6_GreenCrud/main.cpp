/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 20, 2018, 11:49 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int fn,fnm1,fnm2;
   
   //Input or initialize values Here
   fnm2=1;
   fnm1=1;
   
    //Printout the first 2 in the sequence
   cout<<"Fibonacci Sequence"<<endl;
   cout<<"{"<<fnm2<<","<<fnm1;
   
   //Calculate 3rd element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   
   //Calculate 4th element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   
   //Calculate 5th element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   
   //Calculate 6th element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   
   //Calculate 7th element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   
   //Calculate 8th element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   
   //Calculate 9th element in sequence
   fn=fnm1+fnm2;
   fnm2=fnm1;
   fnm1=fn;
   cout<<","<<fn;
   

    //Exit
    return 0;
}

