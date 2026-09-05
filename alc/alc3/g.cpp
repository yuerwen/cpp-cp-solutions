#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cek (int mid, vector<int> &cows, int k){
    int count = 1;
    int curr = cows[0];

    for (int i = 0; i < cows.size(); i++){
        if (cows[i] - curr >= mid){
            count++;
            curr = cows[i];
        }
    }

    return count >= k; 
}

signed main(){
    int t; cin >> t; 
    while (t--){
        int n, k; 
        cin >> n >> k; 
        vector<int> cows; 
        for (int i = 0; i < n; i++){
            int x; cin >> x; 
            cows.push_back(x);
        }

        sort(cows.begin(), cows.end()); 

        int lo = 1, hi = cows.back() - cows[0], ans = hi; 
        while (lo <= hi){
            int mid = lo + (hi - lo) /2;
            if (cek(mid, cows, k)){
                ans = mid; 
                lo = mid + 1; 
            } else {
                hi = mid - 1; 
            }
        }

        cout << ans << "\n"; 
    }
}