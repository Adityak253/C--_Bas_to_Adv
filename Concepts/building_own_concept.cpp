#include<iostream>
/*syntax : */
template <typename T>
concept Multipliable=requires (T a,T b)
{
    a * b;
};
template<Multipliable T>
T Add(T a,T b)
{
    return a+b;
}
int main() {
    auto result=Add(3.7,4.3);
    std::cout<<"Result is : "<<result<<std::endl;
    return 0;
}