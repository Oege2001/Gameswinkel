#pragma once
#include <string>
#include <ostream>
#include <sstream>
#include <list>
#include "Game.hpp"


class Person{
    private:
    std::string name;
    float budget;
    std::list<Game> games;
    
    public:
    Person(){name="", budget = 0;}
    Person(std::string name, float budget);
    
    
    bool buy(Game game);
    bool sell(Game game, Person& buyer);

    float getBudget() const;
    void setBudget(float budget);

    std::list<Game> getGames();
    void setGames(std::list<Game> games);
    void addGame(Game game);
    void removeGame(Game game);

    std::string getName() const;
    void setName(std::string name);

    friend std::ostream& operator<<(std::ostream& os, const Person& buyer);

}; 