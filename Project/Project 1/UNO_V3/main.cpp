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
int main(int argc, char** argv) {
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
    
    
    
    
    
    
    void WriteDeck(std::string filename)
{
	std::ofstream ofs(filename)
	if(!ofs)
	{
		std::cout << "Could not open filestream.\n";
		return;
	}
	for(int colour = 0; colour < ColourIndex::Yellow + 1; colour += 40)
	{
		for(int card = 0; card < CardIndex::CXSWTCH+1; card++)
		{
			ofs << colour+card << "\n";
		}
	}
}

std::ifstream deck_file;
bool init = false;

bool IfExists(std::string filename)
{
	std::ifstream ifs(filename);
	if(ifs) return true;
	return false;
}

bool InitDeckFile(std::string filename)
{
	deck_file.open(filename);
	if(!deck_file)
	{
		std::cout << "Could not open " filename << ".\n";
		return false;
	}
	init = true;
	return true;
}

int GetNextCardFromDeck()
{
	if(!init) return -1; // ifstream not open
	if(ifs)
	{
		int card;
		if(ifs >> card) return card;
		return -2; // File error / end of stream perhaps
	}
        return -1; // Stream bad
}

int main()
{
	if(!IfExists("Deck.txt")) WriteDeck("Deck.txt");
	if(!InitDeckFile("Deck.txt")) return 1;
	int player_card_1 = GetNextCardFromDeck();
	int player_card_2 = GetNextCardFromDeck();
}

    // Map/Process Inputs to Outputs

    //Display Outputs

    //Exit program!
    return 0;
//}

