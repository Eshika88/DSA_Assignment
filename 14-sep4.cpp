#include<iostream>
#include<vector>
class solution{
    public:
    string removeDuplicates(string &s) {
        // code here
        unordered_map<char,int>mpp;
        string result="";
        for(char c:s){
            mpp[c]++;
            if(mpp[c]==1){
               result+=c; 
            }
        }
        return result;
    }
};