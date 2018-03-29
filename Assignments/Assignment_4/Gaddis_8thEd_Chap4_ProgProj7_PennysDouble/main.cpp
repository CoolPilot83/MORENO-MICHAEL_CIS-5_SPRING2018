/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 29, 2018, 11:25 AM
 * Purpose:  Pennies for Pay
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int totPay, pPerDay;//Pennies of pay
    char numDays=31;//Most number of days in a month
    //Initialize Variables
    pPerDay=1;
    totPay=pPerDay;
    //Process/Map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day      Pay           Total"<<endl;
    for(int day=1; day<=numDays;day++){
        cout<<day<<setw(2)
                <<setw(12)<<pPerDay/100.0f
                <<setw(14)<<totPay/100.0f<<endl;
        pPerDay*=2;
        totPay+=pPerDay;
    }
    //Output data
    
    //Exit stage right!
    return 0;
}