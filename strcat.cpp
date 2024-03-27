#include<iostream>
#include<cstring>
//point to keep in track-->
//1.while using strcat make sure the dest size is big enough to store the src;
//2.always keep account of the null character when setting the size of destination while 
//using str(n)cpy or str(n)cat;
int main() {
    const char *str{" Hello something"};
    char *str1=new char[100];
    std::strcpy(str1,str);
    std::cout<<str1<<std::endl;//Hello something
    std::strcat(str1,str);//Hello something Hello something
    std::strncat(str1,str,4);
    std::cout<<str1<<std::endl;
    delete (str1);
    return 0;
}