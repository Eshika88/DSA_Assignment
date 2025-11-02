#include<iostream>
#include<vector>
class solution{
    public:
    int removeElementsExceptAlpha(string value){
        string result="";
        for(char c:value){
            if(isalpha(c)){
                result+=c;
            }
        }
        return result;
    }
}