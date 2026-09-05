#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
#define int long long
#define defllt ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 

signed main(){
    int t; cin >> t; 
    while (t--){
        int n, l, r;
        cin >> n >> l >> r; 
        vector<int> b (n+1, 0); 
        for (int i = 1; i <= n; i++){
            b[i] = i;
        }
        b[r] = b[l-1];

        for (int i = 1; i <= n; i++){
            int ai = b[i] ^ b[i-1];
            cout << ai << " ";
        }
        cout << "\n"; 
    }
}