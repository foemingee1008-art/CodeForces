Problem : https://codeforces.com/problemset/problem/4/A (Watermelon)
Rating : 800
Language : C++
Status : Solved independently

1. Problem summary
- Determine whether a given number can be seperated into two even numbers

2. Approach
- Basic rule : odd + even = odd 
               even + even = even
- Only even numbers can be seperated into two even numbers.
- The key is to determine whether a number is divisible by 2

3. Corner case
- 2 is an even number but it can be separated into 1 + 1, which is a summation of two odd numbers

4. Complexity analysis
- T = o(1)
- S = o(1)
