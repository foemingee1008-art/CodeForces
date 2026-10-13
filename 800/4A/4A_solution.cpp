#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    // Check if it is 2 (special case)
    if (n > 2){
        // determine even number
        if (n % 2 == 0){
            cout << "YES" << '\n';
        } else {
            // odd number need to be rejected
            cout << "NO" << '\n';
        }
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}
