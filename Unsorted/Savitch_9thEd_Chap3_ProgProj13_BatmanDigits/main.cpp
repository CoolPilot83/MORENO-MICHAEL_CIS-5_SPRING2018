/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 19th, 2018, 10:05 PM
 * Purpose:  Savitch Chap3 Programming Project 13
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    
    char ad1, ad2, ad3, ad4;  //Address numbers 1, 2, 3, 4
    
    ad1=rand()%9+1;
    ad2=rand()%9+1;
    ad3=rand()%9+1;
    ad4=rand()%9+1;
   
    if(ad1==ad2){
        do{ad1=rand()%9+1;
           ad2=rand()%9+1;
        }}
    if(ad1==ad3){
        do{ad1=rand()%9+1;
           ad3=rand()%9+1;
        }}
    if(ad1==ad4){
        do{ad1=rand()%9+1;
           ad4=rand()%9+1;
        }}
    if(ad2==ad3){
        do{ad2=rand()%9+1;
           ad3=rand()%9+1;
        }}
    if(ad3==ad4){
        do{ad3=rand()%9+1;
           ad4=rand()%9+1;
        }}
    if(ad2==ad4){
        do{ad2=rand()%9+1;
           ad4=rand()%9+1;
        }}
    //Exit stage right!
    return 0;
}