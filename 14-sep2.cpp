#include<iostream>
#include<vector>
class solution{
    public:
    int maxFreqChar(string word){
      vector<char>result;
      maxi=0;
      int n=word.size();
      for(char c:word){
        result[c]++;
      }
      for(char c:word){
        maxi=max(max,result[c]);
      }
        return maxi;
      }

    }