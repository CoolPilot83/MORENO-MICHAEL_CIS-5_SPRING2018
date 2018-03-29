/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 27, 2018, 10:20 AM
 * Purpose:  Create an working Odometer
 */

//System Libraries
#include <iostream>
#include <fstream> //File library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    //Initialize Variables
    out.open("Odometer.out");
    //Process/Map inputs to outputs
    for(char tn1000s='0';tn1000s<='9';tn1000s++){
        for(char n1000s='0';n1000s<='9';n1000s++){
            for(char n100s='0';n100s<='9';n100s++){
                for(char n10s='0';n10s<='9';n10s++){
                    for(char n1s='0';n1s<='9';n1s++){
                        for(char tnths='0';tnths<='9';tnths++){
                            out<<tn1000s
                                    <<n1000s
                                    <<n100s
                                    <<n10s
                                    <<n1s
                                    <<'.'<<tnths<<endl;
                            }
                        }   
                    }
                }
            }
        }
    //Output data
    
    //Close file
    out.close();
    //Exit stage right!
    return 0;
}