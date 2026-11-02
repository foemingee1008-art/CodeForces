#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a(7);
    for (int i = 0; i < 7; ++i){
        cin >> a[i];
    }
    int maxNum = numeric_limits<int>::min();
    int maxIndex = 7;
    int sum = 0;
    for (int i = 0; i < 7; ++i){
        if (a[i] > maxNum){
            maxNum = a[i];
            maxIndex = i;
        }
    }
    for (int i = 0; i < 7; ++i){
        if (i == maxIndex) continue;
        sum += a[i];
    }
    int ans = sum * -1 + a[maxIndex];
    cout << ans << "\n";
}

int main(){
    int T;
    cin >> T;
    while (T--){
        solve();
    }
}