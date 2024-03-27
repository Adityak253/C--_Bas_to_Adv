#include<iostream>
int max(int a,int b)
{
    return (a>b) ? a : b;    
}
double max(int a,int b,int c)
{
    if(a>b || a>c)
    return a;
    else if(b>a || b>c)
    return b;

    return c;
}
int main() {
    std::cout<<max(5,3,6)<<std::endl;
    std::cout<<max(5,3)<<std::endl;
    return 0;
}