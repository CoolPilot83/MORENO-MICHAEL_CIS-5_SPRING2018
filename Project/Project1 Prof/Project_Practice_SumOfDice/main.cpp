/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 3, 2018, 10:02 AM
 * Purpose: Simulate a pair of dice
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char die1, die2;//Dice Face Values = [1,6]
    int c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12;//Count of Dice Throws 
    int toss;
    
    // Initial Variables
    toss=36000;
    c2=c3=c4=c5=c6=c7=c8=c9=c10=c11=c12=0;
    
    //Check the Statistics
    for(int thrw=1;thrw<=toss;thrw++){
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        switch(sum){
            case 2:c2++;break;
            case 3:c3++;break;
            case 4:c4++;break;
            case 5:c5++;break;
            case 6:c6++;break;
            case 7:c7++;break;
            case 8:c8++;break;
            case 9:c9++;break;
            case 10:c10++;break;
            case 11:c11++;break;
            case 12:c12++;break;
            default:cout<<"Logic Error"<<endl;
        }
    }
    
    //Display Outputs
    cout<<"Number of Dice Thrown = "<<toss<<endl;
    cout<<"Sum of 2 Occurred = "<<setw(9)<<c2<<" Times"<<endl;
    cout<<"Sum of 3 Occurred = "<<setw(9)<<c3<<" Times"<<endl;
    cout<<"Sum of 4 Occurred = "<<setw(9)<<c4<<" Times"<<endl;
    cout<<"Sum of 5 Occurred = "<<setw(9)<<c5<<" Times"<<endl;
    cout<<"Sum of 6 Occurred = "<<setw(9)<<c6<<" Times"<<endl;
    cout<<"Sum of 7 Occurred = "<<setw(9)<<c7<<" Times"<<endl;
    cout<<"Sum of 8 Occurred = "<<setw(9)<<c8<<" Times"<<endl;
    cout<<"Sum of 9 Occurred = "<<setw(9)<<c9<<" Times"<<endl;
    cout<<"Sum of 10 Occurred = "<<setw(8)<<c10<<" Times"<<endl;
    cout<<"Sum of 11 Occurred = "<<setw(8)<<c11<<" Times"<<endl;
    cout<<"Sum of 12 Occurred = "<<setw(8)<<c12<<" Times"<<endl;
    cout<<"Number of Dice Thrown = "<<c2+c3+c4+c5+c6+c7+c8+c9+c10+c11+c12<<endl;
    
    //Exit program!
    return 0;
}

