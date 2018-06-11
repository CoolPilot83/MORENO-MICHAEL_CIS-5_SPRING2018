/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on February 26, 2018, 4:20 PM
 * Purpose:  Creating a Calculation of the Test Average
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
    float test1, // test result 1
          test2, // test result 2
          test3, // test result 3
          test4, // test result 4
          test5, // test result 5
          totTest, // total test score
          avgTest; // Average test score
    
    //Process/Map inputs to outputs
    totTest=test1+test2+test3+test4+test5;
    avgTest=totTest/5;
    
    //Output data
    cout<<endl;
    cout<<"Please Input Your Test Scores!"<<endl;
    cout<<"Tests Score 1"<<endl;
    cin>>test1;
    cout<<"Tests Score 2"<<endl;
    cin>>test2;
    cout<<"Tests Score 3"<<endl;
    cin>>test3;
    cout<<"Tests Score 4"<<endl;
    cin>>test4;
    cout<<"Tests Score 5"<<endl;
    cin>>test5;
    cout<<"total of the test score ="<<test1+test2+test3+test4+test5<<endl;
    cout<<endl;
    cout<<"Average of the test score ="<<(test1+test2+test3+test4+test5)/5;
    //Exit stage right!
    return 0;
}