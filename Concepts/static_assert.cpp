#include<iostream>
template <typename T>
void printNumber(T a)
{
    static_assert(std::is_integral<T>::value,"must pass integral value !");
    std::cout<<"n : "<<a<<std::endl;
}
int main() {
    int a;
    std::cin>>a;
    printNumber(a);
    return 0;
}