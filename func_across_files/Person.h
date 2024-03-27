#ifndef PERSON_H
#include <iostream>
#define PERSON_H
class Person
{
    private:
    std::string Name;
    int Age;
    public:
    Person(std::string Name,int Age);
    void Introduce();
    ~Person();
};
#endif
