#include<iostream>
template <typename T>
concept Typecheck = requires (T a)
{
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};

Typecheck auto add(Typecheck auto a,Typecheck auto b)
{
    return a+b;//implicit conversion
}
int main() {
    char a{'a'};//this addition will not work(if the condition is sizeof(T)<4) because the type is addition of char values are not possible
    char b{'g'};//so compiler will do implicit conversion to int and sizeof(int)==4
    std::cout<<add(a,b);
    return 0;
}