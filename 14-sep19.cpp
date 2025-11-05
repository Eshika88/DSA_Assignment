#include<iostream>
#include<vector>
class solution{
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        if(n==0) return;
        if(mat[0].size()!=n) return;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        int start=0;int end=n-1;
        for(int i=0;i<n;i++){
            while(start<end){
                swap(mat[i][start],mat[i][end]);
                start++,end--;
            }
        }
        return mat;
    }
};

