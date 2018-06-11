/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 11, 10:20 PM
 * Purpose: Creating the Pizza
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
    float numPiz=4.0f, //number of pizza
          diapiz, //diameter of pizza
          ppl,    //people
          totpiz; //total of pizza
    
    //Process/Map inputs to outputs
      totpiz=ppl*numPiz;
    //Output data
      cout<<"number of people who join in the party "<<endl;
      cin>>ppl;
      cout<<"total number of people eating the pizza ="<<ppl*numPiz<<endl;
      
    //Exit stage right!
    return 0;
}