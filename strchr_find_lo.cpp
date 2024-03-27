#include<iostream>
#include<cstring>

int main() {
    const char ele[] {"home/user/hello.cpp"};
    const char *output= std::strrchr(ele,'/');
    if(output)
    std::cout<<output+1<<std::endl;
    else
    std::cout<<"Null ptr is returned"<<std::endl;
    return 0;
}