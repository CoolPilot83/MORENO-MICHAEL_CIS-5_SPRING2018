/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on February 22, 2018, 12:25 PM
 * Purpose:  Savitch 9thEd Chap1, Program Project 4, Free Fall w/o Drag
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //Declare all Variables Here
    float grav,
          dists,
          time;
    
    //Input or initialize values Here
    grav=32.174;
    time=1.2;
    
    //Process/Calculations Here
    dists=0.5*grav*(time*time);
    
    //Output Located Here
    cout<<"Total Distance an object has fallen: "<<dists<<"ft"<<endl;        

    //Exit
    return 0;
}

