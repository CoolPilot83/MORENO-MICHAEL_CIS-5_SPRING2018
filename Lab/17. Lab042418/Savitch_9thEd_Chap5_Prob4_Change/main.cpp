/* 
 * File:   main.cpp
 * Author: MIchael D Moreno
 * Created on April 24, 2018, 12:22 PM
 * Purpose:  Savitch Problem
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable
//Like PI, e, Gravity, or conversions
const int DOLRSPN=100;//Conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
//Function Prototypes Here
int numCoin(int,int);//Calculates number of coins
int rmnder(int,int);//Remainder after subtracting coins

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float price, amtTndr;
    int pennies, n25, n10, n5, n1;
    
    //Input or initialize values Here
    price=9.14f;       //Price is $9.14
    amtTndr=10.00f;    //Amount paid
    
    //Output Initial Conditions
    pennies=(amtTndr-price+0.005)*DOLRSPN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item Price = $"<<price<<endl;
    cout<<"Amount Tendered = $"<<amtTndr<<endl;
    cout<<"Change Returned "<<pennies<<" cents"<<endl;
    
    //Calculate minimum amount of change
    n25=numCoin(pennies,QUARTER);
    pennies=rmnder(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=rmnder(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=rmnder(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=rmnder(pennies,PENNY);
    
    //Output Located Here
    cout<<"Number of Quarters = "<<n25<<endl;
    cout<<"Number of Dimes    = "<<n10<<endl;
    cout<<"Number of Nickels  = "<<n5<<endl;
    cout<<"Number of Pennies    = "<<n1<<endl;
            
    //Exit
    return 0;
}

int numCoin(int pennies, int denom){
    return pennies-numCoin(pennies,denom)*denom;
}