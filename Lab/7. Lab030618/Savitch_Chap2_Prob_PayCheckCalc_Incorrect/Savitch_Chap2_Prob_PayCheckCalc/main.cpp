/* 
 * File:   main.cpp
 * Author: Michael D. Moreno
 * Created on March 6, 2018, 10:29 AM
 * Purpose: Paycheck Calculation
 */

#include <cstdlib>

using namespace std;




int main(int argc, char** argv) {

    float grPayRt, payrate, hrswork, numDep, ss, fedtax, stTax, unioDue, hlthIns, netpay;
    //Percetages
    ss=0.06f;
    fedTax=0.14f;
    stTax=0.05f;
    
    //Fees in $'s
    hlthIns=35.0f;
    unioDue=10.0f;
    payrate=16.78f;
    
    
    // Continue adding %'s
    
    
    
    
    grPayRt=hrswork*payrate;
    grPayRt+=grPayRt>40?(hrswork-40)*payrate/2:0;
    fedtax*=grPayRt;
    ss*=grPayRt;
    stTax*=grPayRt;
    hlthIns=numDep>3?35:0;
    netpay=grPayRt-ss-fedtax-stTax-unioDue-hlthIns;
    payrate/2:0;
    
    
    
    
    cout<<grPayRt<<endl;
    cout<<payrate<<endl;
    cout<<hrswork<<endl;
    cout<<numDep<<endl;
    cout<<ss<,endl;
    cout<<fedtax<<endl;
    cout<<stTax<<endl;
    cout<<unioDue<<endl;
    cout<<hlthIns<<endl;
    cout<<netpay<<endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}

