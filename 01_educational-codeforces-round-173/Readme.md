# Codeforces - B. Digits

🔗 [Problem Link](https://codeforces.com/contest/2043/problem/B)
🔗 [Solution Link](https://github.com/kaniz-codes/codeforces-contests-solve/blob/main/01_educational-codeforces-round-173/B_digits.cpp)

##  Problem Summary
Artem writes the digit `d` on the board exactly `n!` times, forming a large number made up of only digit `d`.  
The task is to find which **odd digits** from `1 to 9` divide this number.

##  Approach
- Find the result of `n!`.
- Check if the result of `n! % odd number == 0` 
- Print the **odd numbers**

##  Code Explanation
- A `factorial(n)`function to calculate `n!`.
- A `solve(n, d)` function to check the divisibility and print output. 

##  Test Cases Explained

### Test Case 2: `7 1`

- `n = 7`, so `7! = 7 × 6 × 5 × 4 × 3 × 2 × 1 = 5040`
- You write the digit `1` exactly **5040 times** → a huge number like `111111...111`

Now check which **odd digits** divide this number:

- `1` ✅ (Everything is divisible by 1)
- `3` ✅ (`1 × 5040 % 3 == 0`)
- `5` ❌ (Digit is `1`, not `5`, so can't be divisible by 5)
- `7` ✅ (`5040 ÷ 7 = 720`, whole number)
- `9` ✅ (`5040 ÷ 9 = 560`, whole number)

### ✅ Answer: `1 3 7 9`
