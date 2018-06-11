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
int binaryS(int tickets[], int size, int value){
    int low = 0;
    int high = size-1;
    
    int mid=0;
    while (low <= high){
        mid = (low + high) / 2;

        if(value == tickets[mid]){
            return mid;
        }else if(value > tickets[mid]){
            low = mid +1;
        }else{
            high = mid - 1;
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
    
    int result = binaryS(tickets,10,x);
    
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