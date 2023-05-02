#include <iostream>
#include "include/Game.hpp"

Game::Game(std::string title, int releaseDate, float originalPrice){
    title = "";
    releaseDate = 0;
    originalPrice = 0;
}

std::ostream &operator<<(std::ostream &os, const Game &rhs) {
    if (rhs.title == ""){
        os << "no game known";
    }else{
        os << "title: " << rhs.title << " (release date: " << rhs.releaseDate << ", ";
        os << "original price: " << rhs.originalPrice << ", ";
        os << "release date: " << rhs.releaseDate << ", ";
    }
    os << "\n";
    return os;
    
    };

