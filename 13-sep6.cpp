#include<iostream>
#include<vector>
class solution{
    public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int i=0;
        int j=0;
        if(nums.empty()) return 0;
        for( i=1;i<n;i++){
            if(nums[i]!=nums[j]) 
                 j++;
                 nums[j]=nums[i];
            }
            return j+1;
    }
};