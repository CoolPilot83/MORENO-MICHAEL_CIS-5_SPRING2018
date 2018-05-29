/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 10, 2018, 11:45 AM
 * Purpose: Score a Test:
 *              Drivers License Exam
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <fstream>
#include <iomanip>
#include <cmath>    //Math Lib
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes
void rdFile(ifstream &,char [], int);      
void wrtFile(ofstream &,char [], char [], int);       
int score(char [],char[],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NQSTNS=20; //Number of Questions
    char key[NQSTNS],answers[NQSTNS];  //Answers and key 
    char keyFlNm[]="key.dat";
    string ansFlNm="answers.dat";
    char scrFlNm[]="score.dat";
    ifstream keyFl, ansFl;
    ofstream scrFl;
    
    
    // Initial Variables
    keyFl.open(keyFlNm);
    ansFl.open(ansFlNm.c_str());
    scrFl.open(scrFlNm);
    
    
    // Map/Process Inputs to Outputs
    rdFile(keyFl,key,NQSTNS);
    rdFile(ansFl,answers,NQSTNS);
    wrtFile(scrFl, key, answers, NQSTNS);
    int scrs=score(answers,key,NQSTNS);
    
    
    //Display Outputs
    cout<<"The % Score Received = "<<scrs/NQSTNS*100<<endl;
    
    //Close files
    keyFl.close();
    ansFl.close();
    scrFl.close();
    //Exit program!
    return 0;
}

void rdFile(ifstream & in, char keyAns[], int size){
    for(int i=0;i<size; i++){
        in>>keyAns[i];
    }
}

void wrtFile(ofstream & out,char key[], char ans[], int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<". Incorrect"<<endl;
    }
}

int score(char ans[],char key[],int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct;
}

