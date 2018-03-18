/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 13, 2018, 11:40 AM
 * Purpose:  Logical Operators/Truth Table
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
    bool X, Y;
    
    //Coiumn Heading of Truth Table
    cout<<"X Y | X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X  !X  !Y  !(X&&Y)"
            <<"  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    
    //First Row
    X=true;
    Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" |  ";
    cout<<(X&&Y?'T':'F')<<"     ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"      ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<endl;
    
    
    X=true;
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" |  ";
    cout<<(X&&Y?'T':'F')<<"     ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"      ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<endl;
    
    X=false;
    Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" |  ";
    cout<<(X&&Y?'T':'F')<<"     ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"      ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<endl;
    
    
    X=false;
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" |  ";
    cout<<(X&&Y?'T':'F')<<"     ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"      ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<endl;
            //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}