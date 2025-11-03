#include<iostream>
#include<vector>
class solution{
    public:
    int arraySum(vector<int>num,int& n){
        if(n==0) return 0;
       return arr[n-1]+arraySum(num,n-1)
    }
    }