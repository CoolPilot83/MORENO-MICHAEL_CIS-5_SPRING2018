/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on May 26, 2018, 12:06 PM
 * Purpose: CPP Template
 *          To be copied for each project
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=18;
    int input;
    int valid[]={5658845,4520125,7895122,877541,8451277,1302850
                   ,8080152,4562555,5552012,5050552,7825877,1250255
                   ,1005231,6545231,3852085,7576651,7881200,4281002};
    //Input The Values
    cout<<"Input a valid value"<<endl;
    cin>>input;
    //Output The Smallest and Largest Numbers in the List
    for(int i=0;i<SIZE;i++){
        if(input==valid[i]){
            cout<<"The number you input is valid"<<endl;
        }
        if(input!=valid[i]){
            cout<<"The number you input is invalid"<<endl;
        }
    }
    
    //Exit program!
    return 0;
}

