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
 * Author: Michael D Moreno
 * Created on May 5, 10:00PM
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                

    cout<<"Input a table and output the Augment row,col and total sums."<<endl;
    cout<<"First input the number of rows and cols. <20 for each"<<endl;
    cout<<"Now input the table."<<endl;
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}

void read(int array[][COLMAX],int &row,int &col){
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int p=0;p<col;p++){
            cin>>array[i][p];
        }
    }
}
void sum(const int array[][COLMAX], int row, int col, int Array2[][COLMAX]){
    for(int k=0;k<col;k++){
        Array2[row][k]=0;
    }
    for(int p=0;p<row;p++){
        Array2[p][col]=0;
        for(int k=0;k<col;k++){
            Array2[p][k]=array[p][k];
            Array2[p][col]+=array[p][k];
            Array2[row][k]+=array[p][k];
            Array2[row][col]+=array[p][k];
        }
    }
}

void print(const int array[][COLMAX], int row, int col, int test){
    for(int i=0;i<row;i++){
        for(int x=0;x<col;x++){
            cout<<setw(test)<<array[i][x]<<setw(test);
        }
        cout<<endl;
    }
}
