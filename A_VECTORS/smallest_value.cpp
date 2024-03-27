#include<iostream>
#include<vector>

int smallest(std::vector<int>&arr)
{
    int small=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    return small;
}
int main() 
{
    std::vector<int>arr {3,4,6,1};
    std::cout<<"the smallest is : "<<smallest(arr)<<std::endl;
    return 0;
}