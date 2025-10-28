#include<iostream>
#include<vector>
class solution{
    public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int i=0,j=0;
        unordered_set<int>s;
        while(i<a.size()){
            s.insert(a[i]);
            i++;
        }
        while(j<b.size()){
            s.insert(b[j]);
            j++;
        }
        vector<int>result(s.begin(),s.end());
        sort(result.begin(),result.end());
        return result;
    }
};
