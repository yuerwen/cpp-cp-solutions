#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n; 

bool cek (int mid, vector<int> &psn, int h){
    int dmg = mid, dlt; 
    for (int i = 1; i < n; i++){
            int dlt = psn[i+1] - psn[i];
            dmg += min(mid, dlt); 
    }

    return (dmg >= h); 
}
signed main(){
    int t; cin >> t; 
    while (t--){
        int h; cin >> n >> h; 
        vector<int> psn (n+1);
        for (int i = 1; i <= n; i++){
            cin >> psn[i];
        }

        int l = 1, r = h, ans = r; 
        while (l <= r){
            int mid = l + (r - l)/2;
            if (cek(mid, psn, h)){
                ans = mid; 
                r = mid - 1; 
            } else{
                l = mid + 1; 
            }
        }

        cout << ans << "\n"; 
    }


}