#include<iostream>
//by default enum database has consecutive numeric value !
/*enum something
{
    v1, //0
    v2, //1
    .
    .
    vn  //n
};*/
int main() {
    enum week
    {monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday,
    sunday};
    week today;
    today=monday;
    std::cout<<today+3<<std::endl;//will printout 3
    return 0;
}