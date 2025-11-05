#include<iostream>
#include<vector>
class solution{
    public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
    int n=arr.size(),m=arr[0].size();
    int maxi=0;
    int result;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
       if(maxi<count){
           maxi=count;
           result=i;
       }
    }
    return result;
    }
};