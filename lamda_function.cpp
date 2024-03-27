#include<iostream>
//lamda function syntax
/*[capture list] (parameters) -> return type{
    <function body>
}*/
auto func=[](double a,int b)->double
{
    return a+b;
}(4.43,5);
int main() {
std::cout<<[](int a,int b)
{
    return a+b;//returns directly
}(4,5);
std::cout<<std::endl;
std::cout<<func<<std::endl;
//another way to declare and call lamda function
[]()
{ 
    std::cout<<"I am Aditya"<<std::endl;
}();//--> extra '()' at the end.
auto result=[](double a,double b)->int
{
    return (a+b);//implicit conversion
};
std::cout<<result(3.43,4)<<std::endl;
    return 0;
}