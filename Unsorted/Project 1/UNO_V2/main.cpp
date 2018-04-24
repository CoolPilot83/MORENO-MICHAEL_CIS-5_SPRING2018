/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 17, 2018, 4:06 PM
 * Purpose: Project 1:  UNO
 *                      V2 - card implementation
 */

// System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cstdlib>
#include <ctime>
using namespace std; //namespace I/O steam library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

//Execution Begins Here!
//int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
   
    //Declare Variables
//    char cardclr;//Card color [red, green, blue, yellow]
//    int cardnum, //Card number [0-9]
//            wild, //Wild card, gives choice for any card in game
//            wildP4, //Same as wild, yet with a +4 to opponent
//            blueP2, //Blue card, with +2 for opponent
//            redP2, //red card, with +2 for opponent
//            grnP2, //green card, with +2 for opponent
//            yllwP2,//yellow card, with +2 for opponent
//            plyr1Dk,//player 1 deck
//            plyr2Dk;//player 2 deck
//            
//    
//    // Initial Variables
//    cardclr=rand()%4+'A'; //RST
//    if(cardclr='A'){
//        cardclr="Red"
//        }
//    else if(cardclr='B'){
//        cardclr="Blue"
//        }
//    else if(cardclr='C'){
//        cardclr="Green"
//        }
//    else{
//        cardclr="Yellow"
//        }
//   
//    
//    cout<<cardclr;
    
    
    
    
    
    
    int deck_ptr;
    deck_ptr = std::malloc(sizeof(int)*100); // Allocate 100 int's worth of memory
    int* current_deck_card = deck_ptr; // Make a second pointer so we don't loose position
    for(...)
        {
        current_deck_card* = some_int;
        current_deck_card++; // Increase pointer location to next free address
        }
    std::free(deck_ptr); // When we are finished with the memory, release it 
  







    
    // Map/Process Inputs to Outputs

    



    //Display Outputs

    //Exit program!
    return 0;
//}

