#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main(){
    int t; cin >> t; 
    while (t--){
        int n, h, k; cin >> n >> h >> k; 
        int sum = 0; 
        vector<int> bull(n+1), pref(n+1,0), prefmin(n+1), suffmax(n+2); 
        prefmin[0] = 1e18; 
        suffmax[n+1] = -1e18; 
        for (int i = 1; i <= n; i++){
            cin >> bull[i];
            sum+= bull[i]; 
            pref[i] = pref[i-1] + bull[i]; 
            prefmin[i] = min(prefmin[i-1], bull[i]);
        }

        for (int i = n; i >= 1; i--){
            suffmax[i] = max(suffmax[i+1], bull[i]); 
        }

        int relod = h/sum; 
        int sisa = h - relod * sum; 
        int ans = relod * n + k * relod; // how many bullet seconds + how many seconds relaod
        if (sisa == 0){
            cout << ans - k << endl; // no need to relod 
            continue; 
        } 
        for (int i = 1; i <= n; i++){
            int curr = pref[i] + max(0LL, suffmax[i+1]-prefmin[i]); 
            if (curr >= sisa){
                ans+= i; 
                break; 
            }
        }

        cout << ans << endl; 


    }
}