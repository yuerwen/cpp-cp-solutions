#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXX = 1e18; 

bool cek (int mid, int n, int t, vector<int>&arr){
    int sum = 0; 
    for (int i = 0; i < n; i++){
        sum += mid/arr[i]; 
        if (sum >= t) return true; 
    }

    return false; 
}

signed main(){
    int n, t; cin >> n >> t; 
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int x; cin >> x; 
        arr.push_back(x); 
    }

    int lo = 1, hi = (*min_element(arr.begin(), arr.end()) * t);
    int ans;
    while (lo <= hi){
        int mid = (lo +hi)/ 2;
        if (cek(mid, n, t, arr)){
            ans = mid; 
            hi = mid - 1; 
        } else {
            lo = mid + 1; 
        }
    }

    cout << ans; 
}