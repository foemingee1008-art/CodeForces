#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, a;
    cin >> n >> m >> a;
    
    int numLength, numWidth;
    if (n % a != 0){
        numLength = n / a + 1;
    } else {
        numLength = n / a;
    }
    
    if (m % a != 0){
        numWidth = m / a + 1;
    } else {
        numWidth = m / a;
    }
    
    long long ans = (long long) numLength * numWidth;
    cout << ans << endl;
    
    return 0;
}