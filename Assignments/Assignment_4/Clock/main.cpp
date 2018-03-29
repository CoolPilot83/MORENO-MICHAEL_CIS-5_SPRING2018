/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 27, 2018, 11:20 AM
 * Purpose:  Create an working Clock
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
    out.open("Clock.out");
    //Process/Map inputs to outputs
    for(char yrs='0';yrs<='365';yrs++){
        for(char months='0';months<='12';months++){
            for(char days='0';days<='31';days++){
                for(char hrs='0';hrs<='23';hrs++){
                    for(char mins='0';mins<='59';mins++){
                        for(char sec='0';sec<='59';sec++){
                            out<<yrs<<':'
                                    <<months<<':'
                                    <<days<<':'
                                    <<hrs<<':'
                                    <<mins<<':'
                                    <<sec<<endl;
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