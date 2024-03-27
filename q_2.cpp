#include<iostream>

using namespace std;
class Person
{
    string Name;
    int Age;
    string Country;
    public: 
    void SetName(string Name)
    {
        this->Name=Name;
    }
    string GetName()
    {
        return Name;
    }
    void SetAge(int Age)
    {
        this->Age=Age;
    }
    int GetAge()
    {
        return Age;
    }
    void SetCountry(string Country)
    {
        this->Country=Country;
    }
    string GetCountry()
    {
        return Country;
    }
};
int main() {
    Person p1;
    p1.SetName("Kumar");
    p1.SetAge(20);
    p1.SetCountry("India");
    cout<<"The Name is : "<<p1.GetName()<<endl;
    cout<<"The Age is : "<<p1.GetAge()<<endl;
    cout<<"The Country is : "<<p1.GetCountry()<<endl;
    return 0;
}