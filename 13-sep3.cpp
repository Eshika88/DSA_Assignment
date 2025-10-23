#include<iostream>
#include<vector>
class solution{
    public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0,maxL=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxL){
                maxL=mp[nums[i]]; 
            }
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==maxL){
                sum+=1;
            }
        }
        return sum;

    }
};