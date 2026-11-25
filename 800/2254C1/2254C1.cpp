#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int aOdd1 = 0, aEven1 = 0, bOdd1 = 0, bEven1 = 0;
    for (int i = 0; i < n; ++i){
        if (a[i] == '1'){
            if (i % 2 == 0) aEven1++;
            else aOdd1++;
        } 
        if (b[i] == '1') {
            if (i % 2 == 0) bEven1++;
            else bOdd1++;
        }
    }
    if (aOdd1 != bOdd1 || aEven1 != bEven1){
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}