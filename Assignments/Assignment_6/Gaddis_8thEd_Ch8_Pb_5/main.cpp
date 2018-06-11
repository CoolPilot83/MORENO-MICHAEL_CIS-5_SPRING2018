/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on February 13, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int swap= -1;
    string mswap;
    int length=12;
    int end=11;
    int total=0,low,high,average;
    int months=12;
    string mnth[12];
    mnth[0]="Jan";
    mnth[1]="Feb";
    mnth[2]="Mar";
    mnth[3]="Apr";
    mnth[4]="May";
    mnth[5]="Jun";
    mnth[6]="Jul";
    mnth[7]="Aug";
    mnth[8]="Sep";
    mnth[9]="Oct";
    mnth[10]="Nov";
    mnth[11]="Dec";
    int rainfal[months];
    int munth=0;
    for(int n=0;n<12;n++){
        if(munth<13){
        munth++;
        cout<<"Enter the amount of rain fall for month #"<<munth<<endl;
        cout<< "Enter value: ";
        cin>> rainfal[n]; // puts values in array
        cout<<"\n";
        }
    }
    
    low=rainfal[0];
    high=rainfal[0];
    for(int i=1;i<12;i++)
    {
        if(low>rainfal[i]){//sorts the min number
           low=rainfal[i];
        }
        else if(high<rainfal[i]){//sorts the max number
                 high = rainfal[i];
        }
    }
    for (int t=0;t<12;t++){
        total=total+rainfal[t];
    }
    average=total/months;
    
    
    
    
    
    cout<<"Average amount of rainfall per month: "<<average<<endl;
    cout<<"Total amount of rainfall: "<<total<<endl;
    cout<<"Maximum amount is: "<< high << endl;
    cout<<"Minimum amount is: "<< low << endl;
    //Bubble sort
    
    for(int count = length - 1; count > 0;count--){
        for (int index=0;index < end;index++){
            if (rainfal[index] < rainfal[index+1]){
                swap = rainfal[index + 1];
                rainfal[index +1] = rainfal[index];
                rainfal[index] = swap;
                mswap = mnth[index +1];
                mnth[index+1] = mnth[index];
                mnth[index] = mswap;
            }
        }
        end--;
    }
    for(int index = 0;index<12;index++){
        cout<<std::setw(5);
        cout<<mnth[index]<<" ";
        }
    cout<<endl;
    
    for(int index = 0;index<12;index++){
        cout<<std::setw(5);
        cout<<rainfal[index]<<" ";
        }
    
    cout<<endl;
    
    //Exit stage right!
    return 0;
}