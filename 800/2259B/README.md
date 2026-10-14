Problem : https://codeforces.com/contest/2259/problem/B (Minus Two)  
Rating : 800  
Language : C++  
Tag : Array  
Status : Solved with hints  

1. Problem summary
- Find the maximum frequency of integers at a time after performing operations (minus each number in array by two)  

2. Approach
- Observe that after multiple operations :  
    1.Odd numbers will be 1 permanently even we do operation on it  
    2.Even numbers will be in circulation of 0 and 2  
- The key is to count the occurence of 0, 1 ,2 at a time  
- To find that whether 2 or more even numbers can be 0 or 2 at the same time, we can observe how many opeations we need to do on them so that they can be 0  
- To do so, we can divide the even numbers by to and observe their parity.  

3. Complexity analysis
- T = o(n)  
- S = o(1)  
