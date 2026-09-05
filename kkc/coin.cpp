#include <bits/stdc++.h>
using namespace std; 
int MOD = 1e9+7;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, n; 
    cin >> a >> n;
    vector<int> dp (n+1, 0); 
    dp[0] = 1;
    vector<int> d(a);
    for (int &x : d){
        cin >> x; 
    }
    for (int i = 1; i <= n; ++i){
        for (int x : d){
            if (x <= i){
                dp[i] = (dp[i]+dp[i-x]);
                if (dp[i] >= MOD){
                    dp[i] -= MOD; 
                }
            }
        }
    }
    cout << dp[n] << endl; 
}