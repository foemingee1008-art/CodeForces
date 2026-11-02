#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a(4);
    int state = 0;
    for (int i = 0; i < 4; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < i; ++j){
            for (int k = 0; k < j; ++k){
                if (a[i] + a[j] - a[k] > 0 && a[i] + a[k] - a[j] > 0 && a[j] + a[k] - a[i] > 0) {
                    state = max(state, 2);
                } else if (a[i] + a[j] - a[k] == 0 && a[i] + a[k] - a[j] == 0 && a[j] + a[k] - a[i] == 0){
                    state = max(state, 1);
                }
            }
        }
    }
    if (state == 2) cout << "TRIANGLE" << "\n";
    else if (state == 1) cout << "SEGMENT" << "\n";
    else cout << "IMPOSSIBLE" << "\n";
}

int main()
{
    solve();
    return 0;
}