//
// Created by USER on 17/04/2024.
//

#ifndef HERENCIA_CAPTAIN_H
#define HERENCIA_CAPTAIN_H
#include <string>

class captain{
public:
    captain(int edad, std::string name, std::string alias, std::string bloodType, float height);
    captain(const captain &rhs);
    virtual ~captain();

    int getEdad() const;
    void setEdad(int edad);
    std::string getName() const;
    void setName(std::string name);
    std::string getAlias();
    void setAlias(std::string alias);
    float getHeight() const;
    void setHeight(float height);
    std::string getBloodType()const;
    void setBloodType(std::string bloodType);

    void print() const;

private:
    int edad;
    std::string name;
    std::string alias;
    float height;
    std::string bloodType;
};


#endif //HERENCIA_CAPTAIN_H
