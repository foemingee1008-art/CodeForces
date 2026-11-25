#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n <= 1){
        int num;
        cin >> num;
        cout << "NO" << "\n";
        return;
    }
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    string ans = sum % 4 == 0 ? "YES" : "No";
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin .tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}