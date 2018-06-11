/* 
 * File:   main.cpp
 * Author: Michael D Moreno
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
    int tickets[10] = {13579 ,26791 ,26792 ,33445 ,55555,62483 ,77777 
            ,79422 ,85647 ,93121};
    int x;
    cout<<"Enter the 5-digit winning lottery numbers."<<endl;
    cin>>x;
    cout<<"\n"<<endl;
    
    int result = linearS(tickets,10,x);
    
    if(result >= 0)
    {
        cout << "The winning numbers " << tickets[result] << " matches"
                " one of your tickets "<< endl;
    }
    else
    {
        cout << "You have no tickets matching " << x << "." << endl;
    }
    return 0;
}