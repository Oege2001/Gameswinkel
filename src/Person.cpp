#include <iostream>
#include "include/Person.hpp"

Person::Person(std::string name, float budget){
    this->name = name;
    this->budget = budget;
}
std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    if (rhs.name == ""){
        os << "no buyer known";
    }else{
        os << "name of buyer: " << rhs.name << " (discount: " << rhs.budget << "%)";
    }
    os << "\n";
    return os;
    
    };