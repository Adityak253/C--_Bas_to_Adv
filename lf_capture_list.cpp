#include<iostream>

int main() {
    //capture by value : 
    int a {20};
    auto func=[a]()//pass by value
    {
        std::cout<<"result : "<<a<<std::endl;
    };
    for(size_t i{};i<5;i++)
    {
        std::cout<<"Outer Value : "<<a<<std::endl;
        func();
        a++;
    }
    //capture by reference : 
    int b{12};
    auto func1=[&b]()
    {
        std::cout<<"result(passed by reference : )"<<b<<std::endl;
    };
    for(size_t i {};i<5;i++)
    {
        std::cout<<"Outer value : "<<b<<std::endl;
        func1();
        b++;
    }
    return 0;
}