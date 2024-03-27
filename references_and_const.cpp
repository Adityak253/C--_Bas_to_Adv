#include<iostream>

int main() {
    //for non const..
    std::cout<<"For the non const reference : "<<std::endl;
    int var {10};
    int &var_reference {var};
    std::cout<<"The value of var : "<< var <<std::endl;
    std::cout<<"The value of var_reference : "<<var_reference<<std::endl;
    /*change var-->*/var_reference=20;
    std::cout<<"The value of 'val' after changing : "<<var<<std::endl;
    std::cout<<"The value of 'val_reference' after changing : "<<var_reference<<std::endl;
    //for const..
    std::cout<<"For the const reference : "<<std::endl;
    int const_var {30};
    const int &const_int_reference {const_var};
    std::cout<<"The value of 'const_var' : "<< const_var <<std::endl;
    std::cout<<"The value of 'const_var_reference' : "<<const_int_reference<<std::endl;
    // const_int_reference=30; not possible since the reference is const : 
    const_var=60;//but possible through the main variable which is being referenced :
    std::cout<<"The value of 'const_var' after changing : "<<const_var<<std::endl;
    std::cout<<"The value of 'const_int_reference' after changing : "<<const_int_reference<<std::endl;
    return 0;
}