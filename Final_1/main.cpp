/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mdmpi
 *
 * Created on June 7, 2018, 11:25 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}


/* 
 * File:   main.cpp
 * Author: MICHAEL D MORENO
 * Created on May 5, 2018 @ 9:00AM
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, conversions, or the columns for 2-D arrays

//Function Prototypes Here
bool  inRange(const char [],int &);//Output true,unsigned or false
bool  reverse(int,int &);//Output true,short or false
short subtrct(int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    int unShort;//Unsigned short 
    int snShort=0;       //Signed short

    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;

    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }

    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);

    //Output the result
    cout<<snShort<<endl;

    //Exit
    return 0;
}

bool  inRange(const char digits[],int &unShort){
    int size=strlen(digits);
    for(int i=0;i<size;i++){
        if(digits[i]<48||digits[i]>57){
            return false;
        }
    }
    unShort=digits[0]-48;
    for(int i=1;i<size;i++){
        unShort=unShort*10+digits[i]-48;
    }
    if(unShort>=0 && unShort<=65500){
        return true;
    }
    else return false;
}

short subtrct(int snShort,int num){
    if(snShort>=999)snShort-=num;
    return snShort;
}

bool  reverse(int unShort,int &snShort){
    int n10000=0;
    int n1000=0;
    int n100=0;
    int n10=0;
    int n1=0;
    n10000=unShort/10000;
    unShort-=n10000*10000;
    n1000=unShort/1000;
    unShort-=n1000*1000;
    n100=unShort/100;
    unShort-=n100*100;
    n10=unShort/10;
    unShort-=n10*10;
    n1=unShort;
    snShort=n1;
    snShort=snShort*10+n10;
    snShort=snShort*10+n100;
    snShort=snShort*10+n1000;
    snShort=snShort*10+n10000;

    if(snShort>=-32768 && snShort<=32767)return true;
    else return false;
}

