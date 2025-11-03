#include<iostream>
#include<vector>
class solution{
    public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==0) {
            return 0;
          }
        int left=towerOfHanoi(n-1,from,aux,to);
        int  moves=1;
        int right=towerOfHanoi(n-1,aux,to,from);
        return left+right+moves;
    }
};