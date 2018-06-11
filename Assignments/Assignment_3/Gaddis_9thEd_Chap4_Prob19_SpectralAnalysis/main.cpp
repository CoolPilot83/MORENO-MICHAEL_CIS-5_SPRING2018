/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 22, 2018, 8:33 PM
 * Purpose:  Spectral Analysis
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
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char wavlent;
    
    //Initialize Variables
    cout<<"wavelength"<<endl;
    cin>>wavlent;
    
    //Determine the wavelength
        if(wavlent>1.0e-10){
            cout<<"Gamma Rays"<<endl;
    }else
        if(wavlent>1.0e-8){
            cout<<"X-Rays"<<endl;
    }else
        if(wavlent>4.0e-7){
            cout<<"Ultraviolet"<<endl;
    }else
        if(wavlent>7.0e-7){
            cout<<"Visible Light"<<endl;
    }else
        if(wavlent>1.0e-3){
            cout<<"Infrared"<<endl;
    }else
        if(wavlent>1.0e-2){
            cout<<"Microwaves"<<endl;
    }else
        if(wavlent>1.0e-2){
            cout<<"Radio Wave"<<endl;
    }
    
    
    //Output data
    
    //Exit stage right!
    return 0;
}