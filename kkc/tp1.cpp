#include <bits/stdc++.h>
using namespace std;
const int inf = 1e18; 

signed main(){
    int n; cin >> n; 
    vector<int> pref(n+1); 
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        pref[i] = pref[i-1] + x; 
    }

    int lef = 1, rig = 2, ans = -inf; 
    while (lef <= rig){
        int curr = pref[rig] - pref[lef];
        if (curr < ans){
            lef++;
        } else rig++; 
        ans = max(ans, curr); 
    }

    cout << ans; 
}