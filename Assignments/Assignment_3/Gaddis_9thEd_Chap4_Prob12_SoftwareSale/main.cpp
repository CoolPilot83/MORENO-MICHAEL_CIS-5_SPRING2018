/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 22, 2018, 2:00 PM
 * Purpose:  Software Sale
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
    char quant,
         discunt;
    //Initialize Variables
    cout<<"quantity"<<endl;
    cin>>quant;
    
    //Process/Map inputs to outputs
        if(quant<19){
            cout<<"discount is at 20%"<<endl;
    }else
        if(quant<49){
            cout<<"discount is at 30%"<<endl;
    }else
        if(quant<99){
            cout<<"discount is at 40%"<<endl;
    }else
        if(quant<100){
            cout<<"discount is at 50%"<<endl;
        }
    //Output data
    
    //Exit stage right!
    return 0;
}