/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 28 @ 2300 HRS
 * Purpose:  Midterm Problem 4
 */


//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    char better;
    unsigned short hours;
    float APr1,     //Option A Main Price
            APr2,   //Option A Price 2 if over hrs
            APr3,   //Option A Price 3 if over hrs 2
            AAdHr1, //Option A Additional hrs 
            AAdHr2; //Option A Additional hrs 2
    
    float BPr1,     //Option B Main Price
            BPr2,   //Option B Price 2 if over hrs
            BPr3,   //Option B Price 3 if over hrs 2
            BAdHr1, //Option B Additional hrs 
            BAdHr2; //Option B Additional hrs 2
    
    float CPr1,     //Option C Price
            saving; //Savings    
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if(package=='a'){
        if(hours<=10){
            APr1=16.99f;
            APr2=0.00f;
            cout<<'$'<<APr1<<" A $"<<fixed<<setprecision(2)<<APr2;
            exit(EXIT_SUCCESS);
        }
        if(hours>=11&&hours<=20){
            APr1=16.99f;
            AAdHr1=hours-10;
            APr2=AAdHr1*0.95;
            APr1=APr1+APr2;
            
            BPr1=26.99;
            BAdHr1=20;
            BPr2=BAdHr1*0.74;
            BAdHr2=hours-30;
            BPr3=BAdHr2*0.64;
            BPr1=BPr1+BPr2+BPr3;     
            CPr1=36.99;
            if(APr1<BPr1&&APr1<CPr1){
                better='A';
            }
            if(BPr1<APr1&&BPr1<CPr1){
                better='B';
                saving=(BPr1)-(APr1)*+1;
            }
            if(CPr1<APr1&&CPr1<BPr1){
                better='C';
                saving=(CPr1)-(APr1)*+1;
            }
            cout<<'$'<<APr1<<" "<<better<<" $"<<fixed<<setprecision(2)<<saving;
            exit(EXIT_SUCCESS);
        }
        if(hours>=21){
            APr1=16.99f;
            AAdHr1=10;
            APr2=AAdHr1*0.95;
            AAdHr2=hours-20;
            APr3=AAdHr2*0.85;
            APr1=APr1+APr2+APr3;
            
            BPr1=26.99;
            BAdHr1=20;
            BPr2=BAdHr1*0.74;
            BAdHr2=hours-30;
            BPr3=BAdHr2*0.64;
            BPr1=BPr1+BPr2+BPr3;     
            CPr1=36.99;
            if(APr1<BPr1&&APr1<CPr1){
                better='A';
            }
            if(BPr1<APr1&&BPr1<CPr1){
                better='B';
                saving=(APr1)-(BPr1);
            }
            if(CPr1<APr1&&CPr1<BPr1){
                better='C';
                saving=(APr1)-(CPr1);
            }
            cout<<'$'<<APr1<<" "<<better<<" $"<<fixed<<setprecision(2)<<saving;
            exit(EXIT_SUCCESS);
        }
    }
    
    
    
    
    if(package=='b'){
        if(hours<=20){
            BPr1=26.99f;
            BPr2=0.00f;
            cout<<'$'<<BPr1<<" A $"<<fixed<<setprecision(2)<<BPr2;
            exit(EXIT_SUCCESS);
        }
        if(hours>=21&&hours<=30){
            BPr1=26.99f;
            BAdHr1=hours-20;
            BPr2=BAdHr1*0.74;
            BPr1=BPr1+BPr2;
            
            APr1=16.99;
            AAdHr1=10;
            APr2=AAdHr1*0.95;
            AAdHr2=hours-20;
            APr3=AAdHr2*0.85;
            APr1=APr1+APr2+APr3;     
            CPr1=36.99;
            if(BPr1<APr1&&BPr1<CPr1){
                better='A';
            }
            if(APr1<BPr1&&APr1<CPr1){
                better='B';
                saving=(BPr1)-(APr1);
            }
            if(CPr1<BPr1&&CPr1<APr1){
                better='C';
                saving=(BPr1)-(CPr1);
            }
            cout<<'$'<<BPr1<<" "<<better<<" $"<<fixed<<setprecision(2)<<saving;
            exit(EXIT_SUCCESS);
        }
        if(hours>=31){
            BPr1=26.99f;
            BAdHr1=10;
            BPr2=BAdHr1*0.74;
            BAdHr2=hours-30;
            BPr3=BAdHr2*0.64;
            BPr1=BPr1+BPr2+BPr3;
            
            APr1=16.99;
            AAdHr1=10;
            APr2=AAdHr1*0.95;
            AAdHr2=hours-20;
            APr3=AAdHr2*0.85;
            APr1=APr1+APr2+APr3;     
            CPr1=36.99;
            if(BPr1<APr1&&BPr1<CPr1){
                better='B';
            }
            if(APr1<BPr1&&APr1<CPr1){
                better='A';
                saving=(BPr1)-(APr1);
            }
            if(CPr1<BPr1&&CPr1<APr1){
                better='C';
                saving=(BPr1)-(CPr1);
            }
            cout<<'$'<<BPr1<<" "<<better<<" $"<<fixed<<setprecision(2)<<saving;
            exit(EXIT_SUCCESS);
        }
    }
    
    
    if(package=='c'){
            CPr1=36.99;
            APr1=16.99f;
            AAdHr1=10;
            APr2=AAdHr1*0.95;
            AAdHr2=hours-20;
            APr3=AAdHr2*0.85;
            APr1=APr1+APr2+APr3;     
            
            BPr1=26.99f;
            BAdHr1=10;
            BPr2=BAdHr1*0.74;
            BAdHr2=hours-30;
            BPr3=BAdHr2*0.64;
            BPr1=BPr1+BPr2+BPr3;
            
            if(CPr1<APr1&&CPr1<BPr1){
                better='C';
            }
            if(APr1<CPr1&&APr1<BPr1){
                better='B';
                saving=(APr1)-(CPr1);
            }
            if(BPr1<CPr1&&BPr1<APr1){
                better='A';
                saving=(BPr1)-(CPr1);
            }
            cout<<APr1<< BPr1<<endl;
            cout<<'$'<<CPr1<<" "<<better<<" $"<<fixed<<setprecision(2)<<saving;
            exit(EXIT_SUCCESS);
        }
    return 0;}

    //Output the Charge
    //Output the cheapest package and the savings  
    //Exit
    
