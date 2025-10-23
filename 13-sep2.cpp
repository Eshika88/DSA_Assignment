#include<iostream>
#include<vector>
class solution{
    public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int>result(n,0);
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            result[i]=sum;
        }
        return result;
    }
};