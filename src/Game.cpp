#include <iostream>
#include "include/Game.hpp"
#include <ctime>
#include "include/Person.hpp"


Game::Game(std::string title, int releaseDate, float originalPrice){
    this->title = title;
    this->releaseDate = releaseDate;
    this->originalPrice = originalPrice;
};



float Game::calculateCurrentPrice() const{
    std::time_t result = std::time(NULL);
    std::cout << std::asctime(std::localtime(&result));
    time_t curr_time = time(NULL);
    tm *tm_local = localtime(&curr_time);
    return getOriginalPrice()* (1 - (0.3 * (tm_local->tm_year - getReleaseDate())));
   
};

std::string Game::getTitle(){
    return title;
};

void Game::setTitle(std::string title){
    this->title = title;
};

int Game::getReleaseDate() const{
    return releaseDate;
};

void Game::setReleaseDate(int releaseDate){
    this->releaseDate = releaseDate;
};

float Game::getOriginalPrice() const{
    return originalPrice;
};

void Game::setOriginalPrice(float originalPrice){
    this->originalPrice = originalPrice;
};

bool Game::operator==(const Game& rhs) {
    return title == rhs.title && releaseDate == rhs.releaseDate && originalPrice == rhs.originalPrice;
}

std::ostream &operator<<(std::ostream &os, const Game &rhs) {
    if (rhs.title == ""){
        os << "no game known";
    }else{
        os << "title: " << rhs.title << " (release date: " << rhs.releaseDate << ", ";
        os << "current price: " << rhs.calculateCurrentPrice() << ")";
    }
    os << "\n";
    return os;

    }
