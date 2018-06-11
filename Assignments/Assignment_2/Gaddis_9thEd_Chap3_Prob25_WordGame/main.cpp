/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 11, 2018, 11:30 PM
 * Purpose:  Word games 
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
    float name, age, city, college, prof, animal, petsNm;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"your name"<<endl;
    cin>>name;
    cout<<"your age"<<endl;
    cin>>age;
    cout<<"the name of city"<<endl;
    cin>>city;
    cout<<"The name of a college"<<endl;
    cin>>college;
    cout<<"A profession"<<end;
    cin>>prof;
    cout<<"A type of animal"<<endl;
    cin>>animal;
    cout<<"A pet's name"<<endl;
    cin>>petsNm;
    cout<<"There once was a person name "<<name<<" who lived in "<<city<<endl;
    cout<<"at the age of "<<age<<name<<" went to college at "<<college<<endl;
    cout<<name<<" graduated and went to work as a "<<prof<<endl; 
    cout<<"Then "<<name<<" adopted a(n) "<<animal<<" named "<< petsNm<<endl;
    cout<<"They both lived happily ever after!"<<endl;
    
    
    return 0;
}//Exit stage right!