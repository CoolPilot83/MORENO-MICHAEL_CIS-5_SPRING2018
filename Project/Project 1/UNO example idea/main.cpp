/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on April 17, 2018, 4:06 PM
 * Purpose: Project 1:  UNO
 *                      V2 - card implementation
 */
    #include "Game.h"
    #include "Player.h"
    #include "Card.h"
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <sstream>
    #include <algorithm>  
    #include <vector>
    using namespace std;
    int main(){
        //create instances of files we've created
        Game* unoGame = new Game;
        unoGame->processMenu();
        delete unoGame;
        system("pause");
        return 0;
    };