#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m;
    int n;
    cin >> m >> n;
    string p;
    string q;
    cin >> p >> q;

    vector<int> p_cnt(127);
    vector<int> q_cnt(127);
    bool yes = true;

    if (m - n != 3){
        cout << "No" << "\n";
    } else {
        for (int i = 0; i < m; i++){
            p_cnt[p[i]]++;
        }

        for (int i = 0; i < n; i++){
            q_cnt[q[i]]++;
        }

        for (int i = 97; i < 123; ++i){
            if ((i == 105 || i == 115 || i == 120) && p_cnt[i] - q_cnt[i] != 1){
                cout << "No" << "\n"; 
                yes = false;
                break;
            }
            if ((i != 105 && i != 120 && i != 115) && p_cnt[i] - q_cnt[i] != 0){
                cout << "No" << "\n";
                yes = false;
                break;
            }
        }
        if (yes == true) cout << "Yes" << "\n";
    }
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