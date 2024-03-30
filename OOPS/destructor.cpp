#include<iostream>
//demonstration of destructor
class Person
{
    private:
    std::string Name;
    std::string Post;
    int* Age{nullptr};
    public:
    Person()=default;
    ~Person()
    {
        delete Age;
        std::cout<<"Destructor is called !"<<std::endl;
    }
    Person(std::string_view Name,std::string_view Post,int Age)
    {
        this->Name=Name;
        this->Post=Post;
        this->Age=new int;
        *(this->Age)=Age;
        std::cout<<"Constructor called !"<<std::endl;
    }
   
};
int main() {
    Person p1=Person("Kumar","CEO",20);
    return 0;
}