#include <iostream>
#include "include/Person.hpp"

Person::Person(std::string name, float budget){
    name = "";
    budget = 0;
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