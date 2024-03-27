#include<iostream>
int main()
{
    std::string str {"What are you doing",7};//point to first n elements
    std::string str1 (4,'e');
    std::cout<<str.size()<<std::endl;
    std::cout<<str1<<std::endl;
    std::cout<<str<<std::endl;
    std::string str2 {str,2,3};//{src,from index,number of literals}
    std::cout<<str2<<std::endl;
    return 0;
}