#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXX = 1e18; 
vector<int> arr; 
int n; 

bool cek (int mid){
    int hp = mid; 
    for (int i = 0; i < n; i++){
        hp += arr[i]; 
        if (hp <= 0) return false; 
    }
    return true; 
}

signed main(){
    int t; cin >> t; 
    while (t--){
        cin >> n; 
        arr.resize(n); 
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int l = 0, r = MAXX;
        int ans = -1; 
        while(l <= r){
            int mid = l + (r-l) /2;
            if (cek(mid)){
                ans = mid; 
                r = mid - 1;
            } else {
                l = mid +1; 
            }
        }

        cout << ans << "\n"; 
    }
}