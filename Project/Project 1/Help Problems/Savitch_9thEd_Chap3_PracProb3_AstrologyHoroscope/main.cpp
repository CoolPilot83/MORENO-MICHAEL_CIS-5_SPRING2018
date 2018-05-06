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
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int bdayday, bdaymon;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program will determine your horoscope sign from your birthday!"<<endl;
    do{
        cout<<"Type the month of your birthday using 1-12"<<endl;
        cin>>setw(2)>>bdaymon;
    }while(bdaymon<1||bdaymon>12);//Birthday Input (Month)
        if(bdaymon==1, 3, 5, 7, 8, 10, 12)//Incomplete Day limit for months
            {do{
                cout<<"Now type the day of your birthday"<<endl;
                cin>>setw(2)>>bdayday;
            }while(bdayday<1||bdayday>31);}//Birthday Input (Day)
    if((bdaymon==1&&bdayday>= 20)||(bdaymon==2&&bdayday<=18))//Begining of Range Parameters for horoscope signs
            {cout<<"Your horoscope sign is Aquarius"<<endl;}
        else if((bdaymon==2&&bdayday>=19)||(bdaymon==3&&bdayday<=20))
            {cout<<"Your horoscope sign is Pisces"<<endl;}
        else if((bdaymon==3&&bdayday>=21)||(bdaymon==4&&bdayday<=19))
            {cout<<"Your horoscope sign is Aries"<<endl;}
        else if((bdaymon==4&&bdayday>=20)||(bdaymon==5&&bdayday<=20))
            {cout<<"Your horoscope sign is Taurus"<<endl;}
        else if((bdaymon==5&&bdayday>=21)||(bdaymon==6&&bdayday<=20))
            {cout<<"Your horoscope sign is Gemini"<<endl;}
        else if((bdaymon==6&&bdayday>=21)||(bdaymon==7&&bdayday<=22))
            {cout<<"Your horoscope sign is Cancer"<<endl;}
        else if((bdaymon==7&&bdayday<=23)||(bdaymon==8&&bdayday<=22))
            {cout<<"Your horoscope sign is Leo"<<endl;}
        else if((bdaymon==8&&bdayday>=23)||( bdaymon==9&&bdayday<=22))
            {cout<<"Your horoscope sign is Virgo"<<endl;}
        else if((bdaymon==9&&bdayday>=23)||(bdaymon==10&&bdayday<=22))
            {cout<<"Your horoscope sign is Libra"<<endl;}
        else if((bdaymon==10&&bdayday>=23)||(bdaymon==11&&bdayday<=21))
            {cout<<"Your horoscope sign is Scorpio"<<endl;}
        else if((bdaymon==11&&bdayday>=22)||(bdaymon==12&&bdayday<=21))
            {cout<<"Your horoscope sign is Sagittarius"<<endl;}
        else if((bdaymon==12&&bdayday>=22)||(bdaymon==1&&bdayday<=19))
            {cout<<"Your horoscope sign is Capricorn"<<endl;}  //End of Range
        else {cout<<"Invalid Birthday Input"<<endl;} //Invalid range if ever meet
return 0;
}