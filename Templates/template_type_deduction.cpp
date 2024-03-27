#include<iostream>
template <typename T>const T& max(const T &a,const T &b)
{
    std::cout<<"address of a(inside : ) : "<<&a<<std::endl;
    std::cout<<"address of c(inside : ) : "<<&b<<std::endl;
    return (a>b) ? a : b;
}
int main() {
    double b{20.4};
    double a{20.1};
    std::cout<<"address of a(outside : ) :"<<&a<<std::endl;
    std::cout<<"address of b(outside : ) :"<<&b<<std::endl;
    auto result=max(a,b);
    std::cout<<result;
    //add<double>(p1,p2)--> explicit type deduction!
    return 0;
}