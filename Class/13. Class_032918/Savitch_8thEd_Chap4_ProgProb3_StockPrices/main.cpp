/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 29, 2018, 10:25 AM
 * Purpose:  Stock Prices
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int dolStk, numStk, denStk; //Stock price $ num/den
    int numShrs; //Number of shares
    float valStks;//Value of stocks in $'s
    char again;//Continue or not
    
    //Initialize Variables
    denStk=8;
    
    //Process/Map inputs to outputs
    do{
        //Randonly choose the stock price
        dolStk=rand()%1000;//[0-999]
        numStk=rand()%8;//[0-7]/8
        numShrs=rand()%90+10;//[10-99]
        
        //Calculate the stock value
        valStks=numShrs*(dolStk+static_cast<float>(numStk/denStk));
       
        //Display Outputs
        cout<<"The number fo shares of stock = "
                <<numShrs<<endl;
        cout<<"The value of the stock/share = $"
                <<dolStk<<" "<<numStk<<"/"<<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStks<<endl;
        
        //Prompt user to see if they want to continue program
        cout<<endl<<"WOuld you like to continue? Y/N"<<endl;
        cin>>again;
    }while(again=='Y'||again=='Y');
    //Output data
    
    //Exit stage right!
    return 0;
}