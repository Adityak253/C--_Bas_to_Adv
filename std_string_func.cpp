#include<iostream>

int main() {
    std::string str {"Something is not good do something"};
    str.shrink_to_fit();
    std::cout<<str.capacity();
    return 0;
}