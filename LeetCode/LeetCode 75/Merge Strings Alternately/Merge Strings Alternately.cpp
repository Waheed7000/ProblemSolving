// https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75
#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int len;
        if (word1.length() > word2.length())
            len = word1.length();
        else
            len = word2.length();
        for (int i = 0; i < len; i++) {
            if(i < word1.length())
                result += word1[i];
            if(i < word2.length())
                result += word2[i];
        }
        return result;
    }
};

int main() {
    string word1 = "abcde";
    string word2 = "xy";
    Solution s;
    cout << s.mergeAlternately(word1, word2);
    
}