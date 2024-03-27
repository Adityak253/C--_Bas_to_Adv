#include<iostream>
#include<concepts>
//alternative
//syntax 2
template<std::integral T>//constaint to use integral parameters!
T sum(T a, T b) {
    return (a + b);
}
//syntax 1
template <typename T>
requires std::integral<T>
T mul(T a,T b)
{
    return (a*b);
}
/*synatx 3 : */
std::integral auto  Print(std::integral auto a ,std::integral auto b)
{
    return a*b;
}
int main() {
    int a;
    int b;
    std::cout<<"Enter the two numbers : ";
    std::cin>>a>>b;
    auto result=sum(a,b);
    auto result1=mul(a,b);
    std::cout <<"Using syntax 2 : "<< result << std::endl; // Should output 8
    std::cout<<"Using syntax 1 : "<<result1<<std::endl;
    std::cout<<"Third syntax is executed : "<<Print(4,6);
    return 0;
}