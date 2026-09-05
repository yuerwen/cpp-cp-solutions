#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t; 
    while (t--){
        int n, k; 
        cin >> n >> k;
        vector<int> price(n+1, 0), disc(k); 
        for (int i = 1; i <= n; i++){
            cin >> price[i];
        }
        for (int i = 0; i < k; i++){
            cin >> disc[i];
        }

        sort(price.begin()+1, price.end());
        sort(disc.begin(), disc.end());

        int ans = 0; 
        for (int i = 0; i <= n; i++){
            ans += price[i]; 
        }

        int curr = n + 1; 
        for (int i = 0; i < k && curr > 0; i++){
            curr -= disc[i];
            if (curr >= 1){
                ans-= price[curr]; 
            }
        }
        cout << ans << "\n"; 
    }
}