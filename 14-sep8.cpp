#include<iostream>
#include<vector>
class solution{
    public:
    int countDigits(int digit){
        int count=0;
        while(digit){
            int digit=digit/10;
            count++;
        }
        return count;
    }
}