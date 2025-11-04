#include<iostream>
#include<vector>
class solution{
    public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int result=false;
        int n=mat.size();
        int m=mat[0].size();
        int top=0,right=m-1,bottom=n-1,left=0;
        while(left<=right&&top<=bottom){
        for(int i=left;i<=right;i++){
            if(mat[top][i]==x) return true;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            if(mat[i][right]==x) return true;
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            if(mat[bottom][i]==x) return true;
        }
        }
        bottom--;
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            if(mat[i][left]==x) return true;
        }
        }
        left++;
    }
    return result;
}
};