#include<iostream>
using namespace std;

int main() {
    size_t size {10};
    int *arr {new int [size]{}};
    //note-->
    //range based loop doesn't work on dynamic arrays
    //functions like std::size doesn't work
    return 0;
}