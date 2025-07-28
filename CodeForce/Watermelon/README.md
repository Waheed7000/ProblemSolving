# [Watermelon](https://codeforces.com/problemset/problem/4/A)

> **Platform:** Codeforces  
> **Difficulty:** 800  
> **Tags:** Math, Brute Force, Implementation  
> **Status:** Solved  

---

## Problem Description

You are given an integer `w` representing the weight of a watermelon. Your task is to determine whether it's possible to split the watermelon into two parts such that:
- Each part has a positive even weight, and
- The sum of the two parts equals `w`

Return **"YES"** if it's possible, otherwise return **"NO"**.

---

## Example

**Input:**

`w = 8`

**Output:**

`YES`

**Explanation:**
- One possible valid split is: 4 and 4.
- Both numbers are positive even integers, and their sum is 8.
- So the output is `"YES"`.

---

## Approach

### Solution Code (C++)
```Cpp
int main() {
    int w;
    cin >> w;
    if (2 < w && w % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
```
## Explanation:

1. We first read the input integer `w`.

2. We check two conditions:
    - Is `w` greater than 2? (because 2 cannot be split into two positive even numbers)
    - Is `w` divisible by 2? (only even numbers can be split into two even integers)

3. If both are true → print **"YES"**, otherwise print **"NO"**.

## Complexity Analysis

- **Time Complexity:** `O(1)`
Just a single input read and one if-check. Constant time.

- **Space Complexity:** `O(1)`
No extra space is used beyond a single integer.

---