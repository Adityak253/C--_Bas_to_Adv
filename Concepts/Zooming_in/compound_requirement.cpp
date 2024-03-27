#include<iostream>
template <typename T>
concept ConversionRequirement = requires (T a,T b)
{
    {a+b} /*noexcept(optional)*/-> std::convertible_to<int>;
};


ConversionRequirement auto Print(ConversionRequirement auto a,ConversionRequirement auto b)
{
    return a+b;
}
// template <ConversionRequirement T>
// T Print(T a,T b)
// {
//     return a+b;
// }
template <typename T>
T add(T a,T b)
{
    return a+b;
}
int main() {
    double a{34.6};
    int b{23};
    std::string str{"hello"};
    std::string str1{" world"};
    std::cout<<Print(a,b)<<std::endl;
    auto result=add(str,str1);
    std::cout<<result;
    return 0;
}