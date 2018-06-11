/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 11, 2018, 9:50 PM
 * Purpose:  Create a CSC/CIS 5 Template
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
    float mont,  //month
          year,  //year
          totamo,//total amount
          stSal=4.0f, //state sale tax
          coSal=2.0f, //county sales tax
          toSal=6.0f, //Total sale tax
            S, //Product Sales
            T; //Total Income
    
    //Process/Map inputs to outputs
    S=T/1.06;
    toSal=stSal*coSal;
    totamo=S/toSal;
            
    //Output data
    cout<<"The month in the year"<<endl;
    cin>>mont;
    cout<<"-------------"<<endl;
    cout<<"The total of the product Sale ="<<T/1.06<<endl;
    cout<<"Country Sales Tax ="<<endl;
    cin>>coSal;
    cout<<"State Sales Tax ="<<endl;
    cin>>stSal;
    cout<<"total of the sale tax ="<<stSal*coSal<<endl;
    
    //Exit stage right!
    return 0;
}