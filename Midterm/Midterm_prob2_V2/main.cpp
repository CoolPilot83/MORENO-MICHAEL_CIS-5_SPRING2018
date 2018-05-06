/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 28 @ 2100 HRS
 * Purpose:  Midterm Problem 3
 */


//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THSND=1000;//Thousands
const int HNDRD=100; //Hundreds
const int TEN=10;    //Tens
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char n1000s,n100s,n10s,n1s;
    char x;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>x;

    //Calculate Number of 1000's, 100's, 10's, 1's
    n1000s=x/THSND;
    x-=n1000s*THSND;
    n100s=x/HNDRD;
    x-=n100s*HNDRD;
    n10s=x/TEN;
    x-=n10s*TEN;
    n1s=x;
    
    // Calculate the first variable from the cin statement
    if(n1000s==0){
        cout<<"0 \n";
    }
    else if(n1000s==1){
        cout<<"1 = * \n";
    }
    else if(n1000s==2){
        cout<<"2 = ** \n";
    }
    else if(n1000s==3){
        cout<<"3 = *** \n";
    }
    else if(n1000s==4){
        cout<<"4 = **** \n";
    }
    else if(n1000s==5){
        cout<<"5 = ***** \n";
    }
    else if(n1000s==6){
        cout<<"6 = ****** \n";
    }
    else if(n1000s==7){
        cout<<"7 = ******* \n";
    }
    else if(n1000s==8){
        cout<<"8 = ******** \n";
    }
    else if(n1000s==9){
        cout<<"9 = ********* \n";
    }
    else{
        cout<<n1000s<<" = ? \n";
    }
    
    
    // Calculate the second variable from the cin statement
    if(n100s==0){
        cout<<"0 \n";
    }
    else if(n100s==1){
        cout<<"1 = * \n";
    }
    else if(n100s==2){
        cout<<"2 = ** \n";
    }
    else if(n100s==3){
        cout<<"3 = *** \n";
    }
    else if(n100s==4){
        cout<<"4 = **** \n";
    }
    else if(n100s==5){
        cout<<"5 = ***** \n";
    }
    else if(n100s==6){
        cout<<"6 = ****** \n";
    }
    else if(n100s==7){
        cout<<"7 = ******* \n";
    }
    else if(n100s==8){
        cout<<"8 = ******** \n";
    }
    else if(n100s==9){
        cout<<"9 = ********* \n";
    }
    else{
        cout<<n100s<<" = ? \n";
    }
    
    
    // Calculate the third variable from the cin statement
    if(n10s==0){
        cout<<"0 \n";
    }
    else if(n10s==1){
        cout<<"1 = * \n";
    }
    else if(n10s==2){
        cout<<"2 = ** \n";
    }
    else if(n10s==3){
        cout<<"3 = *** \n";
    }
    else if(n10s==4){
        cout<<"4 = **** \n";
    }
    else if(n10s==5){
        cout<<"5 = ***** \n";
    }
    else if(n10s==6){
        cout<<"6 = ****** \n";
    }
    else if(n10s==7){
        cout<<"7 = ******* \n";
    }
    else if(n10s==8){
        cout<<"8 = ******** \n";
    }
    else if(n10s==9){
        cout<<"9 = ********* \n";
    }
    else{
        cout<<n10s<<" = ? \n";
    }
    
    
    // Calculate the last variable from the cin statement
    if(n1s==0){
        cout<<"0 \n";
    }
    else if(n1s==1){
        cout<<"1 = * \n";
    }
    else if(n1s==2){
        cout<<"2 = ** \n";
    }
    else if(n1s==3){
        cout<<"3 = *** \n";
    }
    else if(n1s==4){
        cout<<"4 = **** \n";
    }
    else if(n1s==5){
        cout<<"5 = ***** \n";
    }
    else if(n1s==6){
        cout<<"6 = ****** \n";
    }
    else if(n1s==7){
        cout<<"7 = ******* \n";
    }
    else if(n1s==8){
        cout<<"8 = ******** \n";
    }
    else if(n1s==9){
        cout<<"9 = ********* \n";
    }
    else{
        cout<<n1s<<" = ? \n";
    }
    
    
}