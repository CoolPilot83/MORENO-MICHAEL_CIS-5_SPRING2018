/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 20, 2018, 11:30 AM
 * Purpose:  Creating a multi-line C Character
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char x;
    
    //Prompt for the variable value
    cout<<"Type in a character utilized to output the Big C"<<endl;
    cin>>x;
    
    //Output data
    cout<<"  "<<x<<x<<x<<endl;
    cout<<" "<<x<<"   "<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<x<<endl;
    cout<<" "<<x<<"   "<<x<<endl;
    cout<<"  "<<x<<x<<x<<endl;
    
    //Exit stage right!
    return 0;
}