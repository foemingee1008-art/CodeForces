#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--){
        int n;
        cin >> n;
    
        int zero = 0;
        int one = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x == 0){
                zero++;
            } else {
                one++;
            }
        }
    
        if (one >= zero){
            cout << "Bessie" << "\n";
        } else {
            cout << "Elsie" << "\n";
        }
    }
    
    return 0;
}