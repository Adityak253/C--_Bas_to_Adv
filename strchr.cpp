// #include <cstring>
// #include <iostream>
 
// int main()
// {
//     const char* str = "hello I'm aditya and age is 20";
//     char target = 'a';
//     const char* result = str;
//     int iteration {};
//     while ((result = std::strchr(result, target)) != nullptr)
//     {
//         std::cout << "Found '" << target
//                   << "' starting at '" << result << "'\n";
 
//         // Increment result, otherwise we'll find target at the same location
//         ++result;
//         ++iteration;
//     }
//     std::cout<<"the number of iterations : "<<iteration;
// }
#include<iostream>
#include<cstring>
int main() {
    const char *str="Something is not good and I'm eating burger";
    const char *result=str;
    const char *result1=str;
    char target='e';
    result=std::strchr(str,target);
    std::cout<<result<<std::endl;//only the first instance
    int iterations {};
    while((result1=std::strchr(result1,target))!=nullptr)
    {
        std::cout<<"Found the target : "<<target<<"starting at : "<<result1<<std::endl;
        ++iterations;
        ++result1;
    }
    return 0;
}