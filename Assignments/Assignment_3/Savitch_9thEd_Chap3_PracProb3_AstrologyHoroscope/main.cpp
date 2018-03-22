/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 18, 2018, 1:20 PM
 * Purpose:  Savitch Practice Problem 3
 * Write an astrology program. The user types in a birthday, and the program
responds with the sign and horoscope for that birthday. The month may
be entered as a number from 1 to 12. Then enhance your program so
that if the birthday is only one or two days away from an adjacent sign,
the program announces that the birthday is on a “cusp” and also outputs
the horoscope for that nearest adjacent sign. This program will have a
long multiway branch. Make up a horoscope for each sign. Your program
should include a loop that lets the user repeat this calculation until the user
says she or he is done.
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
    unsigned int bdayday, bdaymon;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program will determine your horoscope sign from your birthday!"<<endl;
    cout<<"Type the month of your birthday using 1-12"<<endl;
    if ((!(cin >> bdaymon))||(bdaymon >= 1) || (bdaymon <= 12))
        {bday<=12?              //Birtthday Input (Month)
    cout<<"Now type the day of your birthday"<<endl;
    cin>>bdayday;                 //Birthday Input (Day)
    
    
    
    
    
    //Output data
    
    //Exit stage right!
    return 0;
}