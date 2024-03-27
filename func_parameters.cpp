#include<iostream>

void Sum(int a,int b,int &result)
{
    result=a+b;//result-->output parameter;
    //a & b -->input parameters
}
int main() {
    int result;
    Sum(5,6,result);
    std::cout<<"Result of sum is : "<<result<<std::endl;
    return 0;
}