#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        
        vector<int> a(3);
        
        for (int i = 0; i < 3; i++){
            cin >> a[i];
        }
        
        int ans = n - min({a[0], a[1], a[2]});
        cout << ans <<'\n';
    }
    return 0;
}