#include<iostream>
#include<string.h>
//strcmp


int main() {
    int n {},l {},u {};
    char str1 [] {"Hello I'm Aditya and my age is 21!"};
    char str2 [] {"Hello I'm Kumar!"};
    char str3 [std::size(str1)];
    char str4 [std::size(str1)];    
    // std::cout<<strcmp(str1,str2);
    // for(int i=0;i<std::size(str1);i++)
    // {
    //     if(std::isblank(str1[i]))
    //     n++;
    //     if(std::isupper(str1[i]))
    //     u++;
    //     if(std::islower(str1[i]))
    //     l++;
    // }
    // std::cout<<"The number of blank is : "<<n<<std::endl;
    // std::cout<<"The number of upper case is : "<<u<<std::endl;
    // std::cout<<"The number of lower case is : "<<l<<std::endl;
    // for(auto i : str1)
    // {
    //     if(std::isdigit(i))
    //     ++n;
    // }
    for(int i=0;i<std::size(str1);i++)
    {
        str3[i]=std::toupper(str1[i]);
        str4[i]=std::tolower(str1[i]);
    }
    std::cout<<"The upper string is : "<<str3<<std::endl;
    std::cout<<"The lower string is : "<<str4;
    // std::cout<<"the number of digits : "<<n;
    return 0;
} 