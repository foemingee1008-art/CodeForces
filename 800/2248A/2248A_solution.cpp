#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--){
        string s;
        cin >> s;
        
        int zero = s.find('0');
        s.erase(zero, 1);
        int one = s.find('1');
        s.erase(one, 1);
        
        cout << s << '\n';
    }
    return 0;
}