#include<iostream>

using namespace std;
//references -->method to use value of a variable using
//other variable;
//syntax -->int &reference_variable=variable;
//references can be used to modify data at the original place;
int main()
{
    int a {20};
    int& a_reference {a};
    cout<<"The address of a : "<<&a<<" and the value is : "<<a<<endl;
    cout<<"The address of a_reference : "<<&a_reference<<" and the value is : "<<a_reference<<endl;
    cout<<"=========================="<<endl;
    //let's change the value of a;
    cout<<"The address of a (after modifying a): "<<&a<<" and the value is : "<<a<<endl;
    cout<<"The address of a_reference (after modifying a): "<<&a_reference<<" and the value is : "<<a_reference<<endl;
    cout<<"=========================="<<endl;
    //let's change the value of a_reference;
    a_reference = 30;
    cout<<"The address of a (after modifying a_reference): "<<&a<<" and the value is : "<<a<<endl;
    cout<<"The address of a_reference (after modifying a_reference): "<<&a_reference<<" and the value is : "<<a_reference<<endl;
    return 0;
}