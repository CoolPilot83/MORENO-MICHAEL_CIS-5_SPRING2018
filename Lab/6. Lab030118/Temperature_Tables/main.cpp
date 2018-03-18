/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 1, 2018, 11:30 AM
 * Purpose:  Random Number Test, with a
 *           comparison of interpolation to a
 *           first order polynomial 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {

    srand(static_cast<unsigned int>(time(0)));

    unsigned char f1=32, f2=212, c1=0, c2=100; //Table values for temperature
    float m=5.0f/9.0f, b=-32.0f; //polynomial coefficients
    float ceq, cint, f; //temperature values and conversions
    
    f=rand()%181+32; //(32, 212)
    
    ceq=m*(f+b);
    cint=c1+static_cast<float>(c2-c1)/(f2-f1)*(f-f1);
    
    cout<<f<<" fahrenheit = "
            <<ceq<<" centigrade equation "
            <<cint<< " celsius interpolation"<<endl;
    
    
    return 0;
}

