#include <iostream>
#include "include/Person.hpp"
#include "include/Game.hpp"


Person::Person(std::string name, float budget){
    this->name = name;
    this->budget = budget;
};
float Person::getBudget() const {
    return budget;

};

void Person::setBudget(float budget) {
    this->budget = budget;
};

std::string Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
};


void Person::addGame(Game game) {
    games.push_back(game);
}

void Person::removeGame(Game game) {
    games.remove(game);
}

bool Person::buy(Game game) {
    float price = game.calculateCurrentPrice();
    if (budget >= price) {
        budget -= price;
        games.push_back(game);
        return true;
    }
    else {
        std::cout << "Not enough budget to buy " << game.getTitle() << std::endl;
        return false;
    }
}

bool Person::sell(Game game, Person &buyer) {
    float price = game.calculateCurrentPrice();
    if (buyer.getBudget() >= price) {
        buyer.setBudget(buyer.getBudget() - price);
        buyer.addGame(game);
        removeGame(game);
        return true;
    }
    else {
        std::cout << "Not enough budget to buy " << game.getTitle() << std::endl;
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    if (rhs.name == ""){
        os << "no buyer known";
    }else{
        os << "name of buyer: " << rhs.name << " (budget: " << rhs.budget << "%)";
    }
    os << "\n";
    return os;
    
    };