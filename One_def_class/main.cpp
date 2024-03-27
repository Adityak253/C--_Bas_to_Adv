#include<iostream>
#include"header.h"
// struct Person//defined in other translation unit too
// {
//     int a {};
//     int b {};
// };
int main() {
    People p1=People("Kumar",20);
    p1.PrintInfo();
    return 0;
}