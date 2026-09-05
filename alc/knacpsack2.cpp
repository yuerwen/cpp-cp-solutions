#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int N, W;
	cin >> N >> W;
    int totalval = 0; 
	vector<int> weight(N+1), val(N+1);
	for (int i = 1; i <= N; i++) {
		cin >> weight[i] >> val[i];
        totalval += val[i];
	}

	vector<int> dp(totalval +1, 1e12);
    dp[0] = 0; 

	for (int i = 1; i <= N; i++) {
		for (int j = totalval; j >= val[i]; j--) {
			dp[j] = min(dp[j], dp[j - val[i]] + weight[i]);
		}
	}

    int ans = 0; 
    for (int i = 0; i <= totalval; i++){
        if (dp[i] <= W){
            ans = i; 
        }
    }

	cout << ans << endl;
}

