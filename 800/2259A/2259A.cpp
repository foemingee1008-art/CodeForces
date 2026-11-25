#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    char target = '0';
    int ans = 0;
    for (int start = 0; start < n; start += k){
        //find will return end if target is not found in [begin, end)
        auto found = find(s.begin() + start, s.begin() + start + k, target);
        if (found == s.begin() + start + k) ans++;
    }
    cout << ans << "\n";
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}