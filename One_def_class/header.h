#include<iostream>
#ifndef HEADER_H
#define HEADER_H
class People
{
    int age;
    std::string Name;
    public:
    People(std::string Name,int age);
    void PrintInfo()
    {
        std::cout<<"Name : "<<this->Name<<std::endl;
        std::cout<<"Age : "<<this->age<<std::endl;
    }
};
#endif