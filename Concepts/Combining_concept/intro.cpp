#include<iostream>
#include <concepts>
//combining multiple concepts using logical operators;
template <typename T>
concept TypeCheck = requires(T a)
{
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};
template <typename T>
requires std::integral<T> && TypeCheck<T>//both the conditions must be true!
T add(T a,T b)
{
    return a+b;
}

int main() {
    int a{5};
    int b {9};
    std::cout<<add(a,b);
    return 0;
}