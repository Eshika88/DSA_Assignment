#include<iostream>
#include<vector>
class solution{
    public:
    int countWords(string s) {
    // code here.
    int count = 0;
    bool inword=false;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){
            inword=false;
        }
        else if(!inword){
            inword=true;
            count++;
        }
    }
    return count;
}
}