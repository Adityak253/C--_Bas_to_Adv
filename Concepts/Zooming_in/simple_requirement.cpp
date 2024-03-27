#include<iostream>
template <typename T> 
concept Typecheck= requires(T a)
{
    sizeof(T)<=4;//simple requirement only checks syntax
};
template <Typecheck T> 
void Check(T a)
{
    std::cout<<"The value of passed parameter is : "<<a<<std::endl;
}
int main() {
    int a{40};
    double b{34.7};
    Check(b);
    std::cout<<sizeof(double);
    return 0;
}