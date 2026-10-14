Problem : https://codeforces.com/problemset/problem/1328/A (Divisibilty Problem)
Rating : 800
Language : C++
Tag : Math
Status : Solved independently

1. Problem summary
- Find the minimum operation (replace a with a+1) s.t. a is divisible by b

2. Approach
- Our target is make a ≡ 0 (mod b), if cannot, add 1 on a
- This question is equivalent to find the difference of b and a mod b

3. Corner case
- if a ≡ 0 (mod b) at the first try, we do not have to do subtraction
- initialize ans with 0 so that we can directly return 0

4. Complexity analysis
- T = o(1)
- S = o(1)
