#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> pref, arr;
int n, cnt; 

bool cek (int mid, int k){
    int pt1 = 1;
    cnt = 0; 
    for (int pt2 = 1; pt2 <= n; pt2++){
        while (pref[pt2] - pref[pt1-1] > mid && pt2 >= pt1){
            pt1++;
        }

        cnt += (pt2-pt1+1);
    }

    return (cnt >= k); 
}

signed main(){
    int k; 
    cin >> n >> k;
    pref.resize(n+1, 0);

    for (int i = 1; i <= n; i++){
        int x; cin >> x; 
        arr.push_back(x);
        pref[i] = pref[i-1] + x; 
    }

    int l = 0, r = pref[n];
    int ans = r; 
    while (l <= r){
        int mid = l + (r-l) /2;
        if (cek (mid, k)){
            ans = mid; 
            r = mid - 1; 
        } else{
            l = mid + 1; 
        }
    }

    cout << ans << "\n";
}