/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 22, 2018, 1:00 PM
 * Purpose:  Long distance call but short time
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
    char call, min;
    //Initialize Variables
    cout<<"starting time of call"<<endl;
    cin>>call;
    cout<<"Rate per Minute"<<min<<endl;
    
    //Process/Map inputs to outputs
            if(call<06.59){
                cout<<min<<"0.05"<<endl;
        }else
            if(call<19.00){
                cout<<min<<"0.45"<<endl;
        }else
            if(call<06.59){
                cout<<min<<"0.20"<<endl;
        }

    //Output data
    
    //Exit stage right!
    return 0;
}