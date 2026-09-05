#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int s, t, k, q; 
    cin >> s >> t >> k >> q; 
    int maxx = t+k; 
   vector<int> dp (maxx); 
   dp[0] = 0; 
   for (int i = 1; i < maxx; i++){
    if (i % k == 0) {
        dp[i] = i/k; 
    } else {
        dp[i] = dp[i-1] + 1; 
    }
   }


if (s != t){
   if (q == 1){
    cout << dp[t]; 
   } else {
    cout << dp[maxx-1] + ((maxx-1)-t); 
   }
} else {
    if (q == 1) {
        cout << 0; 
    } else cout << 2;
}

}