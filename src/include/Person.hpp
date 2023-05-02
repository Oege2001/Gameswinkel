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
    Person();
    Person(std::string name, float budget);
    float getBudget();
    bool buy(Game game);
    bool sell(Game game, Person& buyer);

    Person getBudget(float);
    void setBudget(float budget);

    Game getGames(std::list<Game>);
    void setGames(std::list<Game> games);
    void addGame(Game game);
    void removeGame(Game game);

    Person getName(std::string);
    void setName(std::string name);

    friend std::ostream& operator<<(std::ostream& os, const Person& buyer);

}; 