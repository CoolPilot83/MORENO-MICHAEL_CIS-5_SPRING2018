/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 15, 2018, 10:03 AM
 * Purpose:  Sort an Array
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry (int [],int);
void prntAry (int [],int,int);
void mrkSort (int [],int);
void swap(int &, int &);
void swapLgc(int &, int &);
void smallst(int [],int,int);
int binSrch(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Rand Seed Generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE];
        
    //Input or initialize values Here
    fillAry(array, SIZE);
    
    //Process/Calculations Here
    prntAry(array, SIZE, 10);
    
    //swapLgc(array[0], array[SIZE-1]);
    //smallst(array, SIZE, 0);
    //smallst(array, SIZE, 1);   Learn this first
    //smallst(array, SIZE, 2);

    //Output Located Here
    //prntAry(array, SIZE, 10);
    //Exit
    return 0;
}

//int binSrch(int a[],int n,int val){
//    //Declare and Inti.
//    int beg, end, middle
//}
//
//void mrkSort (int a[],int n){
//    for( int i=0;i<n-1;i++){
//    smallst(a,n,i);
//    }
//}
//
//void smallst(int a[],int n,int pos){
//    for(int i=pos+1;i<n;i++){
//        if(a[i]<a[pos])swap(a[i],a[pos]);
//    }
//}
//
//void swapLgc(int &a, int &b){
//    a=a^b;
//    b=a^b;
//    a=a^b;//This is the same as swap, except without the temp int
//}
//
//void swap(int &a, int &b){
//    int temp=a;
//    a=b;
//    b=temp;
//}
//
//void mrkSort (int a[],int n){
//    
//}

void prntAry (int a[],int n, int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++)(a[i]=rand()%90+10);
}