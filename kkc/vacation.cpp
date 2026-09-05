#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n; 
    vector<vector<int>> choice (n+1, vector<int>(3));
    for (int i = 1; i <= n; i++){
        cin >> choice[i][0] >> choice[i][1] >> choice[i][2]; 
    }

    vector<vector<int>> dp (n+1, vector<int> (3)); 
    dp[1][0] = choice[1][0];
    dp[1][1] = choice[1][1];
    dp[1][2] = choice[1][2];
    for (int i = 2; i <= n; i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + choice[i][0];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + choice[i][1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + choice[i][2];
    }

    int ans = max(max(dp[n][2], dp[n][1]), dp[n][0]); 
    cout << ans << "\n"; 
}