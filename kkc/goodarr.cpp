#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
#define int long long
#define defllt ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 

signed main(){
    defllt
    int t; cin >> t;
    while (t--){
        int n; cin >> n; 
        int minn = 2e9, idx; 
        for (int i = 0; i < n; i++){
            int a; cin >> a; 
            if (a < minn){
                minn = a; 
                idx = i; 
            }
        }

        cout << n-1<< "\n"; 
        for (int i = 0; i < n; i++){
            if (i == idx) continue;
            cout << idx + 1 << " " << i + 1 << " " << minn << " " << minn + abs(i-idx) << "\n"; 
        }
    }
}