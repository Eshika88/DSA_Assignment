#include<iostream>
#include<vector>
class solution{
    public:
    char getMaxOccuringChar(string& s) {
        //  code here
        vector<int>v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        int maxfreq=0;
        char result='a';
        for(int i=0;i<26;i++){
            if(v[i]>maxfreq){
                maxfreq=v[i];
                result='a'+i;
            }
        }
        return result;
    }
};