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
        
        vector<int> a(n);
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int zero = 0;
        int one = 0;
        int two = 0;
        
        for (int i = 0; i < n; i++){
            //if number is odd
            if (a[i] % 2 == 1){
                one++;
            } else {
                //if number is even
                if ((a[i] / 2) % 2 == 0){ 
                    //need even operations to become 0
                    zero++;
                } else {
                    //need odd operations
                    two++;
                }
            }
        }
        //print the max
        int ans = max({zero, one, two});
        cout << ans << '\n';
    }
    return 0;
}