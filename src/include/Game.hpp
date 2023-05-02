#pragma once
#include <string>
#include <ostream>
#include <sstream>

class Game{
    private:
    std::string title;
    int releaseDate;
    float originalPrice;

    public:

    Game(){title ="" , releaseDate = 0 , originalPrice = 0;}
    Game(std::string title, int releaseDate, float originalPrice);
    std::string getTitle();
    void setTitle(std::string title);

    int getReleaseDate()const;
    void setReleaseDate(int releaseDate);

    float getOriginalPrice() const;
    void setOriginalPrice(float originalPrice);

    float calculateCurrentPrice() const;
    void setCalculateCurrentPrice(float calculateCurrentPrice);
    
    bool operator==( const Game& rhs);

    friend std::ostream& operator<<(std::ostream& os, const Game &game);
};

