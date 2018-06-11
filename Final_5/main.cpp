/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mdmpi
 *
 * Created on June 7, 2018, 11:25 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}
/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on June 5, 2018 11:00PM
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    //Input data and place even in one vector odd in the other
    cout<<"Input the number of integers to input."<<endl;
    cout<<"Input each number."<<endl;
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}
void read(vector<int> &even, vector<int> &odd){
    int numInts;
    cin>>numInts;
    int input;
    for(int i=0;i<numInts;i++){
        cin>>input;
        if(input%2==0){
            even.push_back(input);
        }
        else{
            odd.push_back(input);
        }
    }
}

void prntVec(vector<int>even, vector<int>odd,int n){
    cout<<setw(n)<<"Vector"<<setw(n)<<"Even"<<setw(n)<<"Odd"<<endl;
    int eveCnt=even.size();
    int oddCnt=odd.size();
    for(int i=0;0<eveCnt||0<oddCnt;i++){
        for(int j=0;j<COLMAX;j++){
            if(j==0&&eveCnt>0){
                cout<<setw(n*2)<<even[i];
                eveCnt--;
            }else if(j==0&&eveCnt==0){
                cout<<setw(n*2)<<" ";
            }
            if(j==1&&oddCnt>0){
                cout<<setw(n)<<odd[i];
                oddCnt--;
            }
        }
        cout<<endl;
    }
}


void copy(vector<int>even, vector<int>odd,int array[][COLMAX]){
    for(int i=0;i<even.size();i++){
        array[i][0]=even[i];
    }
    for(int i=0;i<odd.size();i++){
        array[i][1]=odd[i];
    }
}


void prntAry(const int array[][COLMAX],int eveSize,int oddSize,int n){
    cout<<setw(n)<<"Array"<<setw(n)<<"Even"<<setw(n)<<"Odd"<<endl;
    int eveCnt=eveSize;
    int oddCnt=oddSize;
    for(int i=0;0<eveCnt||0<oddCnt;i++){
        for(int j=0;j<COLMAX;j++){
            if(j==0&&eveCnt>0){
                cout<<setw(n*2)<<array[i][j];
                eveCnt--;
            }else if(j==0&&eveCnt==0){
                cout<<setw(n*2)<<" ";
            }
            if(j==1&&oddCnt>0){
                cout<<setw(n)<<array[i][j];
                oddCnt--;
            }
        }
        cout<<endl;
    }
}
