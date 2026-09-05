#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n;
        vector<int> arr(n); 
        int curr = 1;
        for (int i = 0; i < n; i++){
            cin >> arr[i]; 
        }

        int l = 0, ans = 1e18; 
        int elm = 500002; 
        while (l < n){
            int r = l; 
            while (r< n && arr[l] == arr[r]){
                r++;
            }

            ans = min(ans, (n - (r - l)) * arr[l]);

            l = r; 
        }

        cout << ans << "\n";

    }
}