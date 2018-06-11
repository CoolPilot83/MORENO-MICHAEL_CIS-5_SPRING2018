/* 
 * File:   main.cpp
 * Author: MIchael D Moreno
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int linearS(int tickets[], int size, int value)
{
    for(int i = 0; i < size; i++)
    {
        if (value == tickets[i])
        {
            return i;
        }
    }
 
    return -1;
}
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int tickets[18] = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,
    4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,
    7881200,4581002};
    int x;
    cout<<"Enter the 7-digit charge account number."<<endl;
    cin>>x;
    cout<<"\n"<<endl;
    
    int result = linearS(tickets,10,x);
    
    if(result >= 0)
    {
        cout << "The charge account number " << tickets[result] << " is"
                " Valid. "<< endl;
    }
    else
    {
        cout << "The account number " << x << " is InValid." << endl;
    }
    return 0;
}