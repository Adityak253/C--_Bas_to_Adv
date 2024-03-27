#include<iostream>

using namespace std;
//virtual class;
class AbstractEmployee
{
    virtual void Introduce()
    {
        cout<<"Aditya";
    }
};
class Employee : public AbstractEmployee
{
    public:
    void Introduce() override
    {
        cout<<"Overide succesfull";
    }
};
int main()
{
    Employee e1;
    e1.Introduce();
    return 0;
}