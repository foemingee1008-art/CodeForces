#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    
    if (s[0] == '1'){
        cout << count(s.begin(), s.end(), '0') << "\n";
        return;
    }
    
    //Start from the leftest side
    int zero = count (s.begin(), s.end(), '0'); //Initialize zero by assuming all 0s are on the right
    int one = 0; //Initialize by assuming no 1 is on the left
    int ans = n; //The max cost is less than n as we have no way to flip all the binaries
    
    for (int i = 0; i < n; i++){
        if (s[i] == '1') one++; //if 1 is moved to left, we need to flip one more binary
        else zero--; //same
        
        ans = min({ans, one + zero}); //update the possible min cost
    }
    
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--){
        solve();
    }
    
    return 0;
}