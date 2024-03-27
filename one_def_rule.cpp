#include<iostream>
//multiple definations for variables,functions.
//not allowed
//works for classes and structures
//(definations should be in different translation* units)
//*translation units-->fundamental building block of a compilation unit
double weight {};
// double weight=02;--> throw an error because of redefining
int sum(int a,int b)
{
    return a+b;
}
// int sum(int a,int b)
// {
//     return 20; -->will throw an error due to redefination
// }
struct Point//can be defined in the other translation unit           
{          //and will still work;
    int a {};
    int b {};
};
int main()
{
    std::cout<<weight<<std::endl;
    std::cout<<sum(20,1)<<std::endl;
    Point a;
    std::cout<<a.a;
    return 0;
}