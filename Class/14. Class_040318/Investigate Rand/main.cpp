/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 3, 2018, 10:05 AM
 * Purpose: Rand investigation
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>//Format Librart
#include <cstdlib>//Rand/Srand
#include <ctime>//Time
#include <cmath>
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int loop, minRnd, maxRnd;
    
    // Initial Variables
    loop=100;
    maxRnd=minRnd=rand();
    for(int i=1;i<=loop;i++){
        int random=rand();
        if(maxRnd<random)maxRnd=random;
        if(minRnd>random)minRnd=random;
    }
    
    // Map/Process Inputs to Outputs
    cout<<"Number of Random Function calls = "<<loop<<endl;
    cout<<"The Maximum random number detected = "<<maxRnd<<endl;
    cout<<"The Minimum random number detected = "<<minRnd<<endl;
    cout<<"                            2^31-1 = "<<setw(10)<<(pow(2,31)-1)<<endl;
    //Display Outputs

    //Exit program!
    return 0;
}

