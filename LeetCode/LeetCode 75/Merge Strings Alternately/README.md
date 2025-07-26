# [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75)

> **Platform:** LeetCode  
> **Difficulty:** Easy  
> **Tags:** String, Two Pointers, Simulation  
> **Status:** Solved  

---

## Problem Description

Given two input strings word1 and word2, your task is to construct a new string by merging them alternately, starting with a character from word1. Once one of the strings is exhausted, append all remaining characters from the longer string to the end.
Return the resulting merged string.
(Constraints: lengths up to 100, lowercase letters only.) 

---

## Example

**Input:**
word1 = "abc"
word2 = "pqr"

**Output:**
"apbqcr"

**Explanation:**
- Take 'a' from `word1` and 'p' from `word2` → "ap"
- Take 'b' and 'q' → "apbq"
- Take 'c' and 'r' → "apbqcr"

---

## Approach

### Solution Code (C++)
```Cpp
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
```
## Explanation:

1. Determine `len` as the maximum of the two string lengths.

2. Loop from `i = 0` to `< len`:
   - If `word1` still has characters at index `i`, append `word1[i]` to the `result`.
   - If `word2` still has characters at index `i`, append `word2[i]` to the `result`.

3. This approach naturally handles different string lengths without additional logic or branching.

This is a clean and effective **two-pointer simulation**, where `i` acts as a shared pointer traversing both strings.

## Complexity Analysis

- **Time Complexity:** O(m + n), where `m = word1.length()` and `n = word2.length()`.  
  We iterate through up to the longer of the two strings, and each operation (appending a character) is done in constant time.

- **Space Complexity:** O(m + n), because we're constructing a new string that includes all characters from both `word1` and `word2`.

---