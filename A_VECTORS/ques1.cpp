#include<iostream>
#include<vector>
bool CheckConsecutive(std::vector<int>&num)
{
    bool check=false;
    for(int i=0;i<num.size()-1;i++)
    {
        if(num[i]==num[i+1])
        check=true;
    }
    return check;
}
int main() {
    std::vector<int>num;
    int n,val;
    std::cout<<"No of elements in vector : ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>val;
        num.push_back(val);
    }
    std::cout<<"The list is : "<<std::endl;
    for(int i : num)
    std::cout<<i<<" ";
    std::cout<<std::endl;
    std::cout<<"Status of list being consecutive : "<<std::boolalpha<<CheckConsecutive(num);
    return 0;
}