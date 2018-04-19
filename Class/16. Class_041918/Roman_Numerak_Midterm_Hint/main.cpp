/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 19, 2018, 10:35 AM
 * Purpose: Roman Numeral Midterm Hint
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl

using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const int THSND=1000;
const int HNDRD=100;
const int TEN=10;

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    char n100s, n100s, n10s, n1s;
    unsigned short x;
    
    cout<<"This program converts a number to its Roman Numeral equivalent"
            <<endl;
    do{
        cout<<"Input an Interger value between 1-3000"<<endl;
        cin>>x;
    }while(x<1||x>3000);
    
    n100s=x/TH
    
    
    return 0;
}

