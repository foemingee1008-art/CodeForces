#include <bits/stdc++.h>
using namespace std;

void solve(){
    int aR, aS, aP;
    cin >> aR >> aS >> aP;
    string ans;
    int aMax = max({aS, aR, aP});
    for (int i = 0; i < aR + aS + aP; i++){
        if (aMax == aP){
            ans += 'S';
        } else if (aMax == aR){
            ans += 'P';
        } else {
            ans += 'R';
        }
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