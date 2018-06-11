/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 25, 2018, 10:20 AM
 * Purpose:  Larger Than N
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
char letterG(float score);
//Execution Begins Here
int main(int argc, char** argv) {

    
    
    //Declare Variables
    string names [5];
    float scores [5][4];
    char grades[5];
    float testAv[5];
    float score;
    int length=5;
    int end=4;
    int swap;
    
    letterG(score);
    
    for(int i=0;i<5;i++){
        cout<<"\nEnter "<<(i+1)<<" student "<<" name:   ";
        cin>>names[i];
        cout<<"Enter his or her 4 test scores:  ";
        for(int j=0;j<4;j++){
            cin>>scores[i][j];
            while(scores[i][j]>100||scores[i][j]<0){
                cout<<"\nTest score should be between 0 & 100"<<endl;
                cout<<"Enter test score:  ";
                cin>>scores[i][j];
            }
        }
    }
    
    for(int count = length - 1; count > 0;count--){
        for(int i = 0; i < 5; i++){
            for (int index=0;index < end;index++){
                if (scores[i][index] < scores[i][index+1]){
                swap = scores[i][index + 1];
                scores[i][index +1] = scores[i][index];
                scores[i][index] = swap;
                }
            }
        }
    }
    
    
    for(int i=0;i<5;i++){
        testAv[i] = 0;
        for(int j=0;j<4;j++)
            testAv[i] += scores[i][j];
        testAv[i] /=4;
        grades[i] = letterG(testAv[i]);
        
    }
    
    
    
    cout<<"\nStudent Name Average Score Letter Grade"<<endl;
    for(int i=0;i<5;i++){
        cout<<names[i]<<"        "<<testAv[i]<<"         "<<grades[i]<<endl;
    }
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}

char letterG(float score){
        if(score >= 90 && score <=100)
            return 'A';
        else if(score >= 80 && score <=90)
            return 'B';
        else if(score >= 70 && score <=80)
            return 'C';
        else if(score >= 60 && score <=70)
            return 'D';
        else
            return 'F';
    }