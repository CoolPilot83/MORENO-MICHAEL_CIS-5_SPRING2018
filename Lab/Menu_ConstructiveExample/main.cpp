/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 15, 2018, 10:40 AM
 * Purpose:  Menu with Construct Examples
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice; 
    
    //Display Menu
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Independendt-If Example"<<endl;
    cout<<"Type 2 for Dependent-If Example"<<endl;
    cout<<"Type 3 for Ternary Operator Example"<<endl;
    cout<<"Type 4 for Switch-Case Example"<<endl;
    cin>>choice;
       
    //Process/Calculations Here
    if(choice>='1'&&choice<='4'){
        switch(choice){
            case'1':{
                cout<<"Independent-If Example"<<endl;
                //Declare Variables
                float hrsWrkd, payRate, payChk;
                //Initialize Variables
                cout<<"This program calculates your Paycheck"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"ans your pay rate per hour"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=hrsWrkd*payRate;
                //If you worked overtime > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case'2':{
                cout<<"Dependent-If Example"<<endl;
                //Declare Variables
                float hrsWrkd, payRate, payChk;
                //Initialize Variables
                cout<<"This program calculates your Paycheck"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"ans your pay rate per hour"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                if(hrsWrkd>=0&&hrsWrkd<=40){
                    payChk=hrsWrkd*payRate;
                }else{
                    payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case'3':{
                cout<<"Ternary Operator Example"<<endl;
                //Declare Variables
                float hrsWrkd, payRate, payChk;
                //Initialize Variables
                cout<<"This program calculates your Paycheck"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"ans your pay rate per hour"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
                        hrsWrkd*payRate:
                        hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
            case'4':{
                cout<<"Switch-Case Example"<<endl;
                //Declare Variables
                float hrsWrkd, payRate, payChk;
                //Initialize Variables
                cout<<"This program calculates your Paycheck"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"ans your pay rate per hour"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                switch (hrsWrkd>=0&&hrsWrkd<=40){
                    case true:{
                        payChk=hrsWrkd*payRate;
                        break;
                    }
                    default: {
                        payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                    }
                }
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
        }
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    //Output Located Here
   

    //Exit
    return 0;
}

