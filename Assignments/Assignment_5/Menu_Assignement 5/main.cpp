/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 6th, 2018, 10:40 AM
 * Purpose:  Menu for Assignement 5
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Srand function
#include <ctime>    //Time function
#include <cmath>    //Power function
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Display menu
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Feet to Meters Converter"<<endl;
    cout<<"Type 2 for Meters to Feet Converter"<<endl;
    cout<<"Type 3 for Change Back from a Store"<<endl;   
    cout<<"Type 4 for Weight Conversion Kilograms to Lbs"<<endl;
    cout<<"Type 5 for Weight Conversion Lbs to Kilograms"<<endl;
    cout<<"Type 6 for Time Conversion from 24 Hr format to 12 Hr"<<endl;
    cout<<"Type 7 for Shooter"<<endl;
    cin>>choice;
  
    //Process/Map inputs to outputs
    if(choice>='1'&&choice<='7'){
        switch(choice){
            case '1':{
                void Input(int inMtr, int inCenti);
                void Convrt1(int mtrCeti);
                void Convrt2(int ftInch, int feet, float inches);
                void Output(int finish);

                //Execution Begins Here
                int man2(int argc, char** argv) {
                    //Declare Variables
                    //Process/Map inputs to outputs
                    int inMtr, inCenti, outMtr, outCnti, feet, inches;
                    char again;
                    //Initialize Variables

                        Input;
                        Convrt1;
                        Convrt2;
                        Output;
                        cout<<feet<<"    "<<inches;

                    //Output data

                    //Exit stage right!
                  
                }

                void Input(int inMtr, int inCenti){
                    cout<<"This program converts Meters and Centimeters to Feet and Inches!"<<endl;
                    cout<<"To Start out, first input the meters, then centimeters separated by a space!"<<endl;
                    cin>>inMtr>>inCenti;
                    cout<<endl;
                }

                void Convrt1(int mtrCeti){
                    int inMtr, inCenti;
                    mtrCeti=(inMtr*12)+inCenti;
                }

                void Convrt2(int ftInch, int feet, float inches){
                    int mtrCeti;
                    ftInch=(mtrCeti/2.54);
                    feet=ftInch/100;
                    inches=ftInch%100;
                }

                void Output(int finish){
                    int feet, inches;
                    feet=finish;
                    cout<<finish<<" "<<inches<<endl;
                }
                break;
            }
            case '2':{
                void Input(int inMtr, int inCenti);
                void Convrt1(int mtrCeti);
                void Convrt2(int ftInch, int feet, float inches);
                void Output(int finish);

                //Execution Begins Here
                int man3(int argc, char** argv) {
                    //Declare Variables
                    //Process/Map inputs to outputs
                    int inMtr, inCenti, outMtr, outCnti, feet, inches;
                    char again;
                    //Initialize Variables

                        Input;
                        Convrt1;
                        Convrt2;
                        Output;
                        cout<<feet<<"    "<<inches;

                    //Output data

                    //Exit stage right!
                    return 0;
                }

                void Input(int inMtr, int inCenti){
                    cout<<"This program converts Meters and Centimeters to Feet and Inches!"<<endl;
                    cout<<"To Start out, first input the meters, then centimeters separated by a space!"<<endl;
                    cin>>inMtr>>inCenti;
                    cout<<endl;
                }

                void Convrt1(int mtrCeti){
                    int inMtr, inCenti;
                    mtrCeti=(inMtr*1000)+inCenti;
                }

                void Convrt2(int ftInch, int feet, float inches){
                    int mtrCeti;
                    ftInch=(mtrCeti*0.39);
                    feet=ftInch/12;
                    inches=ftInch%12;
                }

                void Output(int finish){
                    int feet, inches;
                    feet=finish;
                    cout<<finish<<" "<<inches<<endl;
                }
                break;
            }
            case '3':{
                const int DOLRSPN=100;//Conversion from dollars to pennies
                const int PENNY=1;
                const int NICKEL=5;
                const int DIME=10;
                const int QUARTER=25;
                //Function Prototypes Here
                int numCoin(int,int);//Calculates number of coins
                int rmnder(int,int);//Remainder after subtracting coins

                //Program Execution Begins Here
                int man4(int argc, char** argv) {
                    //Declare all Variables Here
                    float price, amtTndr;
                    int pennies, n25, n10, n5, n1;

                    //Input or initialize values Here
                    price=9.14f;       //Price is $9.14
                    amtTndr=10.00f;    //Amount paid

                    //Output Initial Conditions
                    pennies=(amtTndr-price+0.005)*DOLRSPN;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Item Price = $"<<price<<endl;
                    cout<<"Amount Tendered = $"<<amtTndr<<endl;
                    cout<<"Change Returned "<<pennies<<" cents"<<endl;

                    //Calculate minimum amount of change
                    n25=numCoin(pennies,QUARTER);
                    pennies=rmnder(pennies,QUARTER);
                    n10=numCoin(pennies,DIME);
                    pennies=rmnder(pennies,DIME);
                    n5=numCoin(pennies,NICKEL);
                    pennies=rmnder(pennies,NICKEL);
                    n1=numCoin(pennies,PENNY);
                    pennies=rmnder(pennies,PENNY);

                    //Output Located Here
                    cout<<"Number of Quarters = "<<n25<<endl;
                    cout<<"Number of Dimes    = "<<n10<<endl;
                    cout<<"Number of Nickels  = "<<n5<<endl;
                    cout<<"Number of Pennies    = "<<n1<<endl;

                    //Exit
                    return 0;
                }

                int numCoin(int pennies, int denom){
                    return pennies-numCoin(pennies,denom)*denom;
                }
                break;
            }
            case '4':{
                void Input(int inMtr, int inCenti);
                void Convrt1(int mtrCeti);
                void Convrt2(int ftInch, float feet, float inches);
                void Output(int finish);

                //Execution Begins Here
                int man5(int argc, char** argv) {
                    //Declare Variables
                    //Process/Map inputs to outputs
                    int inMtr, inCenti, outMtr, outCnti, feet, inches;
                    char again;
                    //Initialize Variables

                        Input;
                        Convrt1;
                        Convrt2;
                        Output;
                        cout<<feet<<"    "<<inches;

                    //Output data

                    //Exit stage right!
                    return 0;
                }

                void Input(int inMtr, int inCenti){
                    cout<<"This program converts Weight from kilograms and grams to pounds and ounces!"<<endl;
                    cout<<"To Start out, first input the kilograms, then grams separated by a space!"<<endl;
                    cin>>inMtr>>inCenti;
                    cout<<endl;
                }

                void Convrt1(int mtrCeti){
                    int inMtr, inCenti;
                    mtrCeti=(inMtr*1000)+inCenti;
                }

                void Convrt2(int ftInch, float feet, float inches){
                    int mtrCeti;
                    ftInch=(mtrCeti*0.0353);
                    feet=ftInch/0.062;
                    inches=ftInch%0.062;
                }

                void Output(int finish){
                    int feet, inches;
                    feet=finish;
                    cout<<finish<<" "<<inches<<endl;
                }
                break;
            }
            case '5':{ 
                void Input(int inMtr, int inCenti);
                void Convrt1(int mtrCeti);
                void Convrt2(int ftInch, int feet, float inches);
                void Output(int finish);

                //Execution Begins Here
                int man6(int argc, char** argv) {
                    //Declare Variables
                    //Process/Map inputs to outputs
                    int inMtr, inCenti, outMtr, outCnti, feet, inches;
                    char again;
                    //Initialize Variables

                        Input;
                        Convrt1;
                        Convrt2;
                        Output;
                        cout<<feet<<"    "<<inches;

                    //Output data

                    //Exit stage right!
                    return 0;
                }

                void Input(int inMtr, int inCenti){
                    cout<<"This program converts Weight from pounds and ounces to kilograms and grams!"<<endl;
                    cout<<"To Start out, first input the pounds, then ounces separated by a space!"<<endl;
                    cin>>inMtr>>inCenti;
                    cout<<endl;
                }

                void Convrt1(int mtrCeti){
                    int inMtr, inCenti;
                    mtrCeti=(inMtr*16)+inCenti;
                }

                void Convrt2(int ftInch, int feet, float inches){
                    int mtrCeti;
                    ftInch=(mtrCeti*28.35);
                    feet=ftInch/1000;
                    inches=ftInch%1000;
                }

                void Output(int finish){
                    int feet, inches;
                    feet=finish;
                    cout<<finish<<" "<<inches<<endl;
                }
            break;
            }
            case '6':{
                void input(int Ins);
                void convert(int Convets);
                void output(int Outs);
                //Execution Begins Here
                int man7(int argc, char** argv) {
                    //Declare Variables
                    char again, time;
                    int hourIn, hourOut, minIn, minOut;
                    //Initialize Variables
                    char A="AM";
                    char P="PM";
                    //Process/Map inputs to outputs
                    do{
                        input;
                        convert;
                        output;

                        cout<<endl<<"Would you like to continue Y/N"<<endl;
                        cin>>again;
                    }while(again=='Y'||again=='y');

                    return 0;
                }

                void input(int Ins){
                    cout<<"This program converts time inputs from a 24 Hour format to a 12 "
                            "Hour "
                            "format!"<<endl;
                    cout<<"Please input your 24 Hour formatted time like so ( 14 25 )"<<endl;
                    cin>>hourIn>>minIn;
                }

                void convert(int Convets){
                    if(hourIn>25)void input;
                    if(hourIn<13){
                        hourOut=hourIn;
                        time=A}
                    if(hourIn>=13){
                        hourOut=hourIn-12;
                        time=P}
                    else void input;

                    minIn=minOut;
                }

                void output(int Outs){
                    cout<<"The input you have given is :"<<hourIn<<':'<<minIn<<endl;
                    cout<<"The Converted Time is       :"<<hourOut<<':'<<minOut<<" "<<time
                            <<endl;
                }
                break;}
            case '7':{
                float frand();//Probability from 0 to 1
                bool shoot(float);

                //Execution Begins Here!
                int man8(int argc, char** argv) {
                    //Set the random number seed
                    srand(static_cast<unsigned int>(time(0)));

                    //Declare Variables
                    bool aLive,bLive,cLive;
                    char remain;
                    float aPk,bPk,cPk;
                    int aCnt,bCnt,cCnt,nGames;

                    //Initial Variables
                    aCnt=bCnt=cCnt=0;
                    aPk=1.0f/3.0f;
                    bPk=1.0f/2.0f;
                    cPk=1.0f;
                    nGames=1000;

                    for(int game=1;game<=nGames;game++){
                        //Initialize Life
                        aLive=bLive=cLive=true;

                        //Map/Process Inputs to Outputs
                        do{
                            if(aLive){
                                if(cLive)      cLive=shoot(aPk);
                                else if(bLive) bLive=shoot(aPk);
                            }
                            if(bLive){
                                if(cLive)      cLive=shoot(bPk);
                                else if(aLive) aLive=shoot(bPk);
                            }
                            if(cLive){
                                if(bLive)      bLive=shoot(cPk);
                                else if(aLive) aLive=shoot(cPk);
                            }
                            remain=aLive+bLive+cLive;
                        }while(remain>1);
                        aCnt+=aLive;
                        bCnt+=bLive;
                        cCnt+=cLive;
                    }

                    //Output the results
                    cout<<"Aaron   Pk = "<<aPk<<endl;
                    cout<<"Bob     Pk = "<<bPk<<endl;
                    cout<<"Charlie Pk = "<<cPk<<endl;
                    cout<<"Out of "<<nGames<<" games"<<endl;
                    cout<<"Aaron   Lives "<<aCnt<<" times"<<endl;
                    cout<<"Bob     Lives "<<bCnt<<" times"<<endl;
                    cout<<"Charlie Lives "<<cCnt<<" times"<<endl;
                    cout<<"Game Check = "<<aCnt+bCnt+cCnt<<" games"<<endl;

                    //Exit program!
                    return 0;
                }

                bool shoot(float pk){
                    if(frand()>pk)return true;
                    return false;
                }

                float frand(){
                    static float MAXRAND=pow(2,31)-1;
                    return rand()/MAXRAND;
                }
                break;
            }
        }
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    
    //Exit stage right!
    return 0;
}