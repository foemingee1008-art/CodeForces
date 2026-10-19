Problem : https://codeforces.com/problemset/problem/2266/C (AND, OR, Sort!)  
Rating : 1000  
Language : C++  
Tag : Greedy, String  
Status : Solved with tutorial  

1. Problem summary
- Flip 0 and 1 so that the binary string become sorted  
- Find the min operations required  

2. Key Observation
- A binary string is sorted when all 0s appear before all 1s  
- Consider every possible split point:  
    - Left side should contain only 0s  
    - Right side should contain only 1s  
- For a given split point:  
    - cost = number of 1s on the left + number of 0s on the right  
- Each misplaced character contributes one operation  

3. Approach
- Maintain two counters:  
    - zero = number of 0s on the right  
    - one = number of 1s on the left  
- Move the split point from left to right, for each character s[i]:  
    - if s[i] == '0', zero--  
    - if s[i] == '1', one++  
    - update min cost
    
4. Complexity analysis
- T = o(n)  
- S = o(1)  