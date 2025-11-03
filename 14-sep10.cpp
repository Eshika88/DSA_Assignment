#include<iostream>
#include<vector>
class solution{
    public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixSum(n,0),suffixSum(n,0);
        prefixSum[0]=nums[0];
        suffixSum[n-1]=nums[n-1];
        for(int r=1,d=n-2;r<n&&d>=0;r++,d--){
            prefixSum[r]=prefixSum[r-1]+nums[r];
            suffixSum[d]=suffixSum[d+1]+nums[d];
        }
        for(int i=0;i<n;i++){
            int leftSum = (i==0)?0:prefixSum[i-1];
            int rightSum = (i==n-1)?0:suffixSum[i+1];
            if(leftSum==rightSum) return i;
        }
        return -1;
        
    }
};