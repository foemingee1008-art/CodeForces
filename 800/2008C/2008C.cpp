#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l , r;
    cin >> l >> r;
    int diff = r - l;
    int i = 2;
    while ((i * (i - 1)) / 2 > diff) {
        ++i;
    }
    cout << i << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}