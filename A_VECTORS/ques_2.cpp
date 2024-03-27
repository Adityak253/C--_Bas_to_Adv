#include<iostream>
#include<vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        std::vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result; 
    }
};
int main() {
    Solution s1;
    std::vector<int>vals={3,3};
    std::vector<int>result;
    result=s1.twoSum(vals,6);
    for(int i : result)
    {
        std::cout<<i<<" ";
    }
    return 0;
}