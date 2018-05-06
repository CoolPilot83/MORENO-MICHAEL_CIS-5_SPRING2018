    #ifndef Card_h
    #define Card_h
    #include <string>
    #include <ctime>
    #include <sstream>
    #include <vector>
    using namespace std;
    class Card {
    private:
        string m_value;
        string m_type;
        int m_score;
        int m_dealerScore;
        bool m_inHand;
    public:
        Card(string value, string type, int score, int dealerScore);
        ~Card();
        string getValue();
        string getType();
        int getScore();
        int getDealerScore();
        void setValue(string username);
        void setType(string password);
        void setScore(int score);
        void setDealerScore(int dealerScore);
        void setInHand(bool isInHand);
        bool getInHand();
    };
    #endif Card_h