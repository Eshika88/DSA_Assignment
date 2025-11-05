#include<iostream>
#include<vector>
class solution{
    public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp.push_back(mat[i][j]);
        }
    }
    sort(temp.begin(),temp.end());
     return temp[temp.size()/2];
    }
};
