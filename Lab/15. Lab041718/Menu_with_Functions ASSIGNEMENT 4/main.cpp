/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on April 17th, 2018, 10:20 AM
 * Purpose:  Menu using Functions and Examples
 */

//System Libraries
#include <iostream>
#include <fstream>  //File Library
#include <cstdlib>  //exit()
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float GRAVITY=6.673e-8f;//cm^3 /gram/sec^2
const float CMMTRS=0.01f;//cm to meters
const float MTRSFT=3.28f;//meters to feet
const float LBSLUGS=32.174f;//lbs per slug

//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='5');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Odometer"<<endl;
    cout<<"Type 2 for Clock"<<endl;
    cout<<"Type 3 for Penny Pay"<<endl;   
    cout<<"Type 4 for Stock Prices"<<endl;
    cout<<"Type 5 for Weight in slugs-lbs"<<endl;
    cout<<"Type any other key to Exit"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm1(){
    //Declare Variables
    ofstream out;
    //Initialize Variables
    out.open("Odometer.out");
    //Process/Map inputs to outputs
    for(char tn1000s='0';tn1000s<='9';tn1000s++){
        for(char n1000s='0';n1000s<='9';n1000s++){
            for(char n100s='0';n100s<='9';n100s++){
                for(char n10s='0';n10s<='9';n10s++){
                    for(char n1s='0';n1s<='9';n1s++){
                        for(char tnths='0';tnths<='9';tnths++){
                            out<<tn1000s
                                    <<n1000s
                                    <<n100s
                                    <<n10s
                                    <<n1s
                                    <<'.'<<tnths<<endl;
                            }
                        }   
                    }
                }
            }
        }
    //Output data
    cout<<"Your Odometer has been created as a file! \nGo look! \n \n \n \n"<<endl;
    
    //Close file
    out.close();
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm2(){
    //Declare Variables
    ofstream out;
    //Initial Variables
    out.open("Clock.out");
    //Map/Process Inputs to Outputs
    for(char ampm='0';ampm<='1';ampm++){
        for(int hours=0;hours<=12;hours++){
            for(char mins10='0';mins10<='5';mins10++){
                for(char mins='0';mins<='9';mins++){
                    for(char sec10='0';sec10<='5';sec10++){
                        for(char sec='0';sec<='9';sec++){
                            if(ampm=='1'&&hours==12){
                                out<<"00:00:00 AM"<<endl;
                                return;
                            }
                            if(hours<10)out<<'0'<<hours<<':'
                                    <<mins10<<mins<<':'
                                    <<sec10<<sec
                                    <<" "<<(ampm=='0'&&hours<12?"AM":"PM")<<endl;
                            else out<<hours<<':'
                                    <<mins10<<mins<<':'
                                    <<sec10<<sec
                                    <<" "<<(ampm=='0'&&hours<12?"AM":"PM")<<endl;
                        }
                    }
                }
            }
        }
    }
    cout<<"Your Odometer has been created as a file! \n Go look!"<<endl;
    //Close file
    out.close();
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm3(){
    //Declare Variables
    unsigned int totPay, pPerDay;//Pennies of pay
    char numDays=31;//Most number of days in a month
    //Initialize Variables
    pPerDay=1;
    totPay=pPerDay;
    //Process/Map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day      Pay           Total"<<endl;
    for(int day=1; day<=numDays;day++){
        cout<<day<<setw(2)
                <<setw(12)<<pPerDay/100.0f
                <<setw(14)<<totPay/100.0f<<endl;
        pPerDay*=2;
        totPay+=pPerDay;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm4(){
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int dolStk, numStk, denStk; //Stock price $ num/den
    int numShrs; //Number of shares
    float valStks;//Value of stocks in $'s
    char again;//Continue or not
    
    //Initialize Variables
    denStk=8;
    
    //Process/Map inputs to outputs
    do{
        //Randonly choose the stock price
        dolStk=rand()%1000;//[0-999]
        numStk=rand()%8;//[0-7]/8
        numShrs=rand()%90+10;//[10-99]
        
        //Calculate the stock value
        valStks=numShrs*(dolStk+static_cast<float>(numStk/denStk));
       
        //Display Outputs
        cout<<"The number fo shares of stock = "
                <<numShrs<<endl;
        cout<<"The value of the stock/share = $"
                <<dolStk<<" "<<numStk<<"/"<<denStk<<endl;
        cout<<"The total value of the stock = $"<<valStks<<endl;
        
        //Prompt user to see if they want to continue program
        cout<<endl<<"WOuld you like to continue? Y/N"<<endl;
        cin>>again;
    }while(again=='Y'||again=='Y');
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

void prblm5(){
    //Declare Variables
    float myMass, msEarth, rEarth, myWt, myWtCnv;
    //Initialize Variables
    myMass=6;//6 slugs
    myWtCnv=myMass*LBSLUGS;
    msEarth=5.972e27f;//grams
    rEarth=6.371e6f;//meters
    //Process/Map inputs to outputs
    myWt=GRAVITY*CMMTRS*CMMTRS*CMMTRS
            *myMass*msEarth*MTRSFT
            /(rEarth*rEarth);
    //Output Weight
    cout<<fixed<<setprecision(0);
    cout<<" "<<endl;
    cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
}