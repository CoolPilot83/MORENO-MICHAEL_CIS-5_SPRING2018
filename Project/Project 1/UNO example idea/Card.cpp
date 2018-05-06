    #include "Card.h"
    #include <iostream>    // using IO functions
    #include <string>      // using string
    using namespace std;
    Card::Card(string value, string type, int score, int dealerScore) {
        m_value = value;
        m_type = type;
        m_score = score;
        m_dealerScore = dealerScore;
        m_inHand = false;
    }
    string Card::getValue() {   // Member function (Getter)
        return m_value;
    }
    string Card::getType() {   // Member function (Getter)
        return m_type;
    }
    int Card::getScore(){
        return m_score;
    }
    int Card::getDealerScore(){
        return m_dealerScore;
    }
    void Card::setValue(string value){
        m_value = value;
    }
    void Card::setType(string type){
        m_type = type;
    }
    void Card::setScore(int score){
        m_score = score;
    }
    void Card::setDealerScore(int dealerScore){
        m_dealerScore = dealerScore;
    };
    void Card::setInHand(bool isInHand){
        m_inHand = isInHand;
    }
    bool Card::getInHand(){
        return m_inHand;
    }
    // need to end the class declaration with a semi-colon