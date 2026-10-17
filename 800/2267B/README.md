Problem : https://codeforces.com/problemset/problem/2267/B (Fashionable Array)  
Rating : 800  
Language : C++  
Tag : Brute force, Sortings, Constructive Algorithm, Greedy  
Status : Solved with tutorial  

1. Problem summary
- Resort the array such that it can have max modes of all prefixes  
- The mode is the number that occurs most frequently  
- If there are numbers occur in same max frequency, mode is the greater one  

2. Approach 1
- Use cnt[i] to count the frequency of each num  
- Priorly print all the max num, then print the smaller with frequency <= the frequency of max num  
- Simulation : 43332141 -> 44332113  
- Explanation : We have two 4 (max), so we print 2 two first and two for the rest smaller num  

3. Approach 2
- Same logic as solution 1, but now we print the num in descending order with frequency of 1 each times and keep looping for the rest  
- Simulation : 43332141 -> 43214313  
- Explanation : 4321|431|3, we just repeatedly print the descending order and skip the num with no remaining frequency  

4. Complexity analysis
- Let V be the length of array  
- T = o(n + V^2)  
- S = o(V)  