Problem : https://codeforces.com/contest/2269/problem/A (SauSaGe Bank)
Rating : 800
Language : C++
Tag : Greedy
Status : Solved independently

1. Problem summary
- Each day the number will be doubled.
- Need to restart it with number 1 and accummulate into sum k times within n days.
- Find max possible sum

2. Approach
- The larger the last day number, the higher the profit can be earned
- Accumulate for n - k + 1 days, and restart every day during remaining days

3. Complexity analysis
- T = o(1)
- S = o(1)