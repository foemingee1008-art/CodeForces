#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    if (b != 0 && a % b == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}