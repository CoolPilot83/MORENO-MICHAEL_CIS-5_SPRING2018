/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 27, 2018, 11:20 AM
 * Purpose:  Create an working Clock
 */

//System Libraries
#include <iostream>
#include <fstream> //File library
#include <cstdlib>
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
    out.open("Clock.out");
    //Process/Map inputs to outputs
    for(char hrs='0';hrs<=12;hrs++){
        for(char ahrs='0';ahrs<='9';ahrs++){
            for(char tnmins='0';tnmins<='5';tnmins++){
                for(char mins='0';mins<='9';mins++){
                    for(char tnsec='0';tnsec<='5';tnsec++){
                        for(char sec='0';sec<='9';sec++){
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