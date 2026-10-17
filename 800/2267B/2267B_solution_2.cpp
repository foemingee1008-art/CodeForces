#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 200000 + 7;
const int mod = 1e9 + 7;
const int INF = 2e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // init();
    int tt = 1;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<int> cnt(101);
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            cnt[x] += 1;
        }
        for (int y = 0; y < 100; ++y){
            for (int x = 100; x >= 0; --x){
                if (cnt[x]){
                    cout << x << " ";
                    cnt[x]--;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}