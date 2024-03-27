#include<iostream>
template <typename T>
concept Incremental= requires (T a)
{
    a+=1;
    ++a;
    --a;
};
template <typename T>
requires Incremental <T> T mul(T a,T b)
{
    return a*b;
}
int main() {
    auto result=mul('v','b');
    std::cout<<"The multiplication is : "<<result<<std::endl;
    return 0;
}