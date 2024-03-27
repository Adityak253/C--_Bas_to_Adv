#include<iostream>

int main() {
    char str [] {"21 ! Hello My Name is Aditya"};
    //check size
    std::cout<<"The size is : "<<std::size(str)<<std::endl;
    //check blank characters : 
    int blank {0},non_blank {0};
    for(int i=0;i<std::size(str);i++)
    {
        if(std::isblank(str[i]))
        {
            blank++;
        }
        else
        {
            non_blank++;
        }
    }
    std::cout<<"The number of blank characters : "<<blank<<std::endl;
    std::cout<<"The number of non blank characters : "<<non_blank<<std::endl;
    //is lower or upper
    int lower_count {0},upper_count {0};
    for(int i=0;i<std::size(str);i++)
    {
        if(std::islower(str[i]))
        {
            lower_count++;
        }
        else if(std::isupper(str[i]))
        {
            upper_count++;
        }
    }
    std::cout<<"The number of upper case characters : "<<upper_count<<std::endl;
    std::cout<<"The number of lower case characters : "<<lower_count<<std::endl;
    //alphanumeric or isdigit
    int num {0},alphanumeric {0};
    for(int i=0;i<std::size(str);i++)
    {
        if(std::isalnum(str[i]))
        {
            alphanumeric++;
        }
        else if(std::isdigit(str[i]))
        {
            num++;//issue!
        }
    }
    std::cout<<"The number of alphanumeric characters : "<<alphanumeric<<std::endl;
    std::cout<<"The number of numeric characters : "<<num<<std::endl;
    return 0;
}