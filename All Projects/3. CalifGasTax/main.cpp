/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 15, 2018, 11:55 AM
 * Purpose:  California Gas Tax at the Pump
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PERCENT=100; //Calculate Percentages
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pmPrice,//Pump prince in $'s
          basePrc,//Base Price in $'s
          fedTax,// Federal Tax in $'s/gallon
          stateTx,//State tax in $'s/gallon
          salesTx,//Sales tax in % of base price
          totlTax,//Total taxes paid
          prctTax;//Percentage taxes paid
    //Initial Variables
    pmPrice=3.30f;//$3.30/gal
    fedTax=0.184f; //18.4 c/gal  .184 $'s/gal
    stateTx=0.417f; //41.7 c/gal  .417 $'s/gal
    salesTx=0.0225f; //2.25% sales tax from base pump price
    
    //Map/Process Inputs to Outputs
    basePrc=(pmPrice-fedTax-stateTx)/(1+salesTx);
    totlTax=pmPrice-basePrc;
    prctTax=totlTax/basePrc*PERCENT;
    //Display Outputs
    cout<<"Pump Price = $"<<pmPrice<<"/gallon"<<endl;
    cout<<"Federal Excise Tax = $"<<stateTx<<"/gallon"<<endl;
    cout<<"State Excise Tax = $"<<salesTx<<"/gallon"<<endl;
    cout<<"State Sales Tax = "<<salesTx*PERCENT<<"%"<<endl;
    cout<<"Base Price = $"<<basePrc<<"/gallon"<<endl;
    cout<<"Total Taxes = $"<<totlTax<<""<<endl;
    //Exit program!
    return 0;
}