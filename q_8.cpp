#include<iostream>

using namespace std;
int main() {
    //dynamic allocations of memory
    //things to note -->
    //1.always free up the memory after use and set it to NULL;
    //2.don't delete a pointer twice might cause unusual behaviour and cause the program to crash
    //Allocation-->
    int *ptr {new int {20}};
    cout<<"The address : "<<ptr<<endl;
    cout<<"The value in the above address : "<<*ptr<<endl;
    delete ptr;
    ptr =NULL;
    return 0;
}