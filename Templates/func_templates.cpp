//function syntax-->
/*template <typename T> T maximum(T a,T b);*/
#include<iostream>
template <typename T> T max(T a,T b);
template <typename T> T add(T a,T b)
{
    return a+b;
}
int main() {
    int a{10};
    int b{23};
    std::string str1{"hello "};
    std::string str2{" World!"};
    double c{3.4};
    double d{4.2};
    str1.append(str2);
    std::cout<<"Max of int type : "<<max(a,b)<<std::endl;
    std::cout<<"Max of double type : "<<max(c,d)<<std::endl;
    std::cout<<"Add of string type : "<<add(str1,str2)<<std::endl;
    return 0;
}

template <typename T>T max(T a,T b)
{
    return (a>b) ? a : b;
} 