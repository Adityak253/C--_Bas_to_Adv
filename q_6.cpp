#include<iostream>

using namespace std;

int main() {
    // auto var1 {"Kumar"};
    // auto var2 {0.21f};
    // auto var3 {973684694945};
    // var3=2084;
    // cout<<sizeof(var3)<<endl;
    // cout<<var1<<endl;
    // cout<<var3;
    // bool light = true;
    // cout<<light;
    // int *p{nullptr} ,other_var {};
    // cout<<p<<endl;
    // cout<<other_var;
    const char* str {"My name is Aditya"};
    char* charptr=const_cast<char*>(str);
    cout<<static_cast<void*>(charptr)<<endl;
    //without implicit declaration 
    const char * str1 {"My name is Aditya"};
    cout<<str1<<endl; 
    return 0;
}