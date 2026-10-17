#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // init();
    int tt = 1;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<int> cnt(101); //case <= 100
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            cnt[x] += 1;
        }
        for (int x = 100; x >= 0; --x){ // test one by one in descending order
            if (!cnt[x]) continue; //skip empty
            int k = cnt[x];
            while (cnt[x]){
                cout << x << " ";
                cnt[x]--;
            }
            for (int y = x - 1; y >= 0; --y){
                int xx = 0;
                while (cnt[y] && xx < k){
                    cout << y << " ";
                    cnt[y]--;
                    xx++;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}