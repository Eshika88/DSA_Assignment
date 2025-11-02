#include<iostream>
#include<vector>
class solution{
    public:
    vector<int> freqChar(string word){
        vector<char>result;
        for(char c:word){
            result[c]++;
        }
        return result;
    }
}