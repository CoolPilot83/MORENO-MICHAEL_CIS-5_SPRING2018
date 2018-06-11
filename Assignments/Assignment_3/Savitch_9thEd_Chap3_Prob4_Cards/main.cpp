/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 21, 2018, 10:50 PM
 * Purpose:  Cards
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

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
    int j,q,a,k,t;
    unsigned short pts;
    //Initialize Variables
    t=10;
    q=10;
    k=10;
    j=10;
    a=1;
    //Cards
    cout<<"Card hand"<<endl;
    cin>>pts;
    
    //Initialize Variable
    
    //pts=rand()%10+2+rand()%10+2;
    
    //Determine the winner 
    if (pts<21){
        cout<<"winner"<<endl;
    }else if(pts>21){
        cout<<"busted"<<endl;
    }else if(pts==21){
        cout<<"BlackJack"<<endl;
    }
    
    //Exit stage right!
    return 0;
}