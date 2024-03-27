#include<iostream>
#include <concepts>
std::integral auto add(std::integral auto a,std::integral auto b)
{
    return a+b;
}
int main() {
    //syntax of concept protection /*(concept name) auto (variable_name){value}*/
    // std::floating_point auto x=add(4,5);//error-->because an floating point number is necessary
    std::integral auto x=add(4,5);
    std::cout<<"x value stored with protection of concept is : "<<x<<std::endl;
    return 0;
} 