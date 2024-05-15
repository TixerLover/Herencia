//
// Created by USER on 17/04/2024.
//

#ifndef HERENCIA_ABILITIES_H
#define HERENCIA_ABILITIES_H

#include "captain.h"
#include <string>

class abilities: public captain{
public:
    abilities():
    abilities(int edad, std::string name, std::string alias, std::string bloodType, float height, std::string power, std::string family, std::string team);
    abilities(abilities &rhs);
    virtual ~abilities();

    std::string getPower() const;
    void setPower(std::string power);
    std::string getFamily() const;
    void setFamily(std::string family);
    std::string getTeam() const;
    void setTeam(std::string team);

    void print() const;

private:
    std::string power;
    std::string family;
    std::string team;

};

#endif //HERENCIA_ABILITIES_H
