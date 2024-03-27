#include<iostream>
#include<cstring>
/*
//function template
template <typename T> T max(T a,T b);
template<>
const char* maximum<const char*>(const char* a,const char *b);*/
template<typename T> T maximum(T a,T b)
{
    return (a>b) ? a : b;
}
//template specialization..
template<>
    const char* maximum<const char *>(const char* a,const char* b)
    {
        return (std::strcmp(a,b)>0 ? "Same" : "Not Same");
    }
int main() {
    int a{20};
    int b{30};
    double c{65.98};
    double d{45.32};
    std::string e{"Hello"};
    std::string f{" World"};
    std::cout<< maximum(e,f)<<std::endl;
    const char *str{"Hello"};
    const char *str1{"World!"};
    std::cout<<maximum(str,str1)<<std::endl;
    int max_int=maximum(a,b);
    return 0;
}