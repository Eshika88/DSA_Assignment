#include<iostream>
#include<vector>
class solution{
    public:
    int countVowels(string s) {
    int count = 0;
    for (char ch : s) {
        ch = tolower(ch);  // convert to lowercase for easy comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}
}
