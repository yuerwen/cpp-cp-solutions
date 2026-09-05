#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e9+7;

signed main(){
	int n, k;
	cin >> n >> k; 
	vector<int> h (n+1);
	
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	
	vector<int> dp (n+1, INF);
	dp[1] = 0;

	
	for (int i = 2; i <= n; i++){
        for (int j = k; j >= 1; j--){
            if (i - j >= 1){
                dp[i] = min(dp[i-j] + abs(h[i]-h[i-j]), dp[i]); 
            }
        }
	}
	
	cout << dp[n] << endl; 
	
}
