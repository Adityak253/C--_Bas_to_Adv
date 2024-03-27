#include<iostream>

//[=]-->capture all by values 
//[&]-->capture all by references
int main() {
    int c{10};
    int q{30};
    std::cout<<"The address of c anf q outside : "<<&c<<" "<<&q<<std::endl;
    //case 1 : capture all by value
    auto func= [=]()
    {
        std::cout<<"Accessed by value : "<<c<<" & "<<q<<std::endl;
        std::cout<<"The address of c and q are : "<<&c<<" "<<&q<<std::endl;
    };
    func();
    //case 2 : capture all by reference : 
    auto func1=[&]()
    {
        std::cout<<"Accessed by reference : "<<c<<" & "<<q<<std::endl;
        std::cout<<"The address of c and q are by reference: "<<std::endl<<&c<<" "<<&q<<std::endl;
    };
    func1();
    return 0;
}