#include<iostream>
template <typename T>
concept Typecheck = requires (T a)
{
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};
template <Typecheck T>
void Print(T a)
{
    std::cout<<"The accepted value is : "<<a<<std::endl;
}
int main() {
    int a{30};
    double b{34.23};
    // Print(b);//will throw an error because sizeof(double)==8-->hence requires condition false;
    Print(a);
    return 0;
}