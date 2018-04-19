/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on April 19, 2018, 11:31 AM
 * Purpose:  PI Factorial Midterm hint
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
    int n, fctrl;
    
    fctrl=1;
    cout<<"Input the factorial you want!"<<endl;
    cin>>n;
    
    for(int i=1; i<=n;i++){
        fctrl*=i;
    }
    
    //Output Data
    cout<<n<<"! = "<<fctrl<<endl;
    //Exit
    return 0;
}

