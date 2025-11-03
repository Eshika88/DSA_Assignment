#include<iostream>
#include<vector>
class solution{
    public:
    int findK(vector<vector<int>> &a, int n, int m, int k) {
        vector<int>ans;
        ans.reserve(m+n);
        int top=0,right=m-1,bottom=n-1,left=0;
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(a[top][i]);
            }
                top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(a[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(a[bottom][i]);
            }
            }
            bottom--;
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(a[i][left]);
            }
            }
            left++;
            }