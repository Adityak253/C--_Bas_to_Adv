#include<iostream>

using namespace std;
//dangling pointers-->pointer to not an valid object;
//solutions-->
//Always intitialize with something
//in case of multiple pointers make a master pointer
int main()
{
    //case 1 -->dereferencing uninitialized value;
    int *ptr;
    cout<<*ptr<<endl;//crash!
    //case 2--> using a pointer after deleting it;
    int *pointer {new int {20}};
    cout<<"The value of 'pointer' = "<<*pointer<<endl;
    delete pointer;
    cout<<"The value of pointer after deleteing : "<<*pointer<<endl;
    //case 3-->multiple pointers pointing to same address -->
    int *p_num {new int {38}};
    int *p_num1{p_num};
    cout<<"p_num - "<<p_num<<" - "<<*p_num<<endl;
    cout<<"p_num1 - "<<p_num1<<" - "<<*p_num1<<endl;
    delete p_num;
    //now ->p_num is pointing to deleted memory
    cout<<"p_num1(after deleteing p_num) - "<<p_num1<<" - "<<*p_num1<<endl;
    cout<<"The program is ending well!"<<endl;
    return 0;
}