/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on February 26, 2018, 5:20 PM
 * Purpose:  Shipping Charges
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
    char kg,mon;
    //Initialize Variables
    cout<<"weight in kilogram"<<endl;
    cin>>kg; //2 to 20
    
    
    //Determine the amount cost per weight
        if(kg>2){
            cout<<"It cost $1.10"<<endl;
    }else
        if(kg<2){
            cout<<"It cost $2.20"<<endl;
    }else
        if(kg<6){
            cout<<"It cost $3.70"<<endl;
    }else
        if(kg<10){
            cout<<"It cost $4.80"<<endl;
    }
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}