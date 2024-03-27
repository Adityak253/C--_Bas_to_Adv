#include<iostream>
using namespace std;
//master_slave pointer--> used to solve
//dangling pointer issue when pointing
//to same memory location using multiple pointer
int main() {
    int *ptr_1 {new int (20)};//master pointer
    int *ptr_2 {ptr_1};//slave pointer
    cout<<"The value of ptr_1 : "<<ptr_1<<" : "<<*ptr_1<<endl;
    if(ptr_1!=nullptr)//only use slave if master is valid
    {
        cout<<"The value of ptr_2 : "<<ptr_2<<" : "<<*ptr_2<<endl;
    }
    delete ptr_1;//releasing master memory;
    ptr_1=nullptr;//always setting to null after deleting
    if(ptr_1!=nullptr)//check if master if valid
    {
        cout<<"The value of ptr_2 : "<<ptr_2<<" : "<<*ptr_2<<endl;
    }
    else//if master ptr is dangling
    {
        cout<<"WARNING! : Trying to access invalid pointer."<<endl;
    }
    cout<<"The program is ending well!";
    return 0;
}