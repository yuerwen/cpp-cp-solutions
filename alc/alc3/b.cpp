#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXX = 1e18; 
int n, k; 

bool cek (int v, int k){
    int p = 1, sum =0; 
    while (v > 0){
        sum += v; 
        if (sum >= n) return true; 
        v /= k; 
    }

    return false; 
}

signed main(){
    cin >> n >> k;
    int lo = 1, hi = MAXX;
    int ans; 
    while (lo <= hi){
        int mid = lo + (hi - lo)/2;
        if (cek(mid, k)){
            ans = mid; 
            hi = mid - 1; 
        } else {
            lo = mid + 1; 
        }
    }

    cout << ans; 
}