#include"Person.h"
Person::Person(std::string Name,int Age)
{
    this->Name=Name;
    this->Age=Age;
}
void Person::Introduce()
{
    std::cout<<"Name is : "<<Name<<std::endl;
    std::cout<<"Age is : "<<Age<<std::endl;
}
Person::~Person()
{
    std::cout<<"Destructor was called !"<<std::endl;
}