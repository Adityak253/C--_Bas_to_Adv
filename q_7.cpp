#include<iostream>

using namespace std;
//pointer intitialization;
//we should avoid using pointers uninitialized;
int main() {
    // int *ptr_uninitialized;
    // *ptr_uninitialized=55;
    // cout<<"The address storing 55 is : "<<ptr_uninitialized<<endl;
    // cout<<"The value inside the address of 55 is : "<<*ptr_uninitialized<<endl;
    //This 4 lines will get a crash of program;
    // int *ptr_initialized {};
    // *ptr_initialized=55;
    // cout<<"The address storing 55 is : "<<ptr_initialized<<endl;
    // cout<<"The value inside the address of 55 is : "<<*ptr_initialized<<endl;
    //This 4 lines will get a crash of program --> a null pointer shouldn't be used to write or store;
    return 0;
}