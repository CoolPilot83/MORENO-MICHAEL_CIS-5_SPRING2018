/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on March 27, 2018, 2:40 PM
 * Purpose:  Calculate ASCII key codes
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;
    
    //Initialize Variables
    out.open("ASCII.out");
    
    //Process/Map inputs to outputs
    for(char cha1=32;cha1<=33;cha1++){
        for(char cha2=33;cha2<=34;cha2++){
            for(char cha3=34;cha3<=35;cha3++){
                for(char cha4=35;cha4<=36;cha4++){
                    for(char cha5=36;cha5<=37;cha5++){
                        for(char cha6=37;cha6<=38;cha6++){
                            for(char cha7=38;cha7<=39;cha7++){
                                for(char cha8=39;cha8<=40;cha8++){
                                    for(char cha9=40;cha9<=41;cha9++){
                                        for(char cha10=41;cha10<=42;cha10++){
                                            for(char cha11=42;cha11<=43;cha11++){
                                                for(char cha12=43;cha12<=44;cha12++){
                                                    for(char cha13=44;cha13<=45;cha13++){
                                                        for(char cha14=45;cha14<=46;cha14++){
                                                            for(char cha15=46;cha15<=47;cha15++){
                                                                for(char cha16=47;cha16<=48;cha16++){
                                                                    out<<cha1<<" "<<cha2<<" "<<cha3<<" "<<cha4<<" "<<cha5<<" "<<cha6<<" "
                                                                            <<cha7<<" "<<cha8<<" "<<cha9<<" "<<cha10<<" "<<cha11<<" "<<cha12
                                                                            <<" "<<cha13<<" "<<cha14<<" "<<cha15<<" "<<cha16<<endl;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
 
    //Output data
    out.close();
    //Exit stage right!
    return 0;
}