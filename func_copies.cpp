#include<iostream>
int sum(int a,int b)
{
    return (++a) * (++b);
}
int modulo(unsigned int a)
{
    return a;
}
void fun();
int main() {
    int a=5;
    int b=6;
    auto c =-6;
    std::cout<<"the value of func sum is : "<<sum(a,b)<<std::endl;
    std::cout<<"The value of c modulo is : "<<modulo(c)<<std::endl;
    fun();
    return 0;
}

void fun()
{
    std::cout<<"The function was declared above and defined below!"<<std::endl;
}