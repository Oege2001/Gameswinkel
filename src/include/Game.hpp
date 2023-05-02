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
    Game(std::string title, int releaseDate, float originalPrice);
    std::string getTitle();
    void setTitle(std::string title);

    int getReleaseDate();
    void setReleaseDate(int releaseDate);

    float getOriginalPrice();
    void setOriginalPrice(float originalPrice);

    float calculateCurrentPrice();
    
    friend std::ostream& operator<<(std::ostream& os, const Game& game);
    
};