#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t; cin >> t; 
    while (t--){
        int n, m, k; 
        cin >> n >> m >> k; 
        vector<int> arr, arr2; 
        for (int i = 0; i < n; i++){
            int x; cin >> x; 
            arr.push_back(x); 
        }

        int valid = 0, cnt = 0;

        multiset<int> a, b, c; // short, same, diff
        for (int i = 0; i < m; i++){
            int x; cin >> x; 
            a.insert(x); 
        }

       for (int j = 0; j < m; j++){
        if (a.find(arr[j]) != a.end()){
            a.erase(a.find(arr[j])); 
            b.insert(arr[j]);  // insert to same
        } else {
            c.insert(arr[j]); // inesrt to diff
        }
       }

       int ans = (b.size() >= k);
       for (int r = m; r < n; r++){
        int out = arr[r-m];
        if (c.find(out) != c.end()){
            c.erase(c.find(out));  // erase from diff 
        } else if (b.find(out) != b.end()){
            b.erase(b.find(out)); // erase from done
            a.insert(out); // put to original 
        } 
        if (a.find(arr[r]) != a.end()){
            a.erase(a.find(arr[r])); 
            b.insert(arr[r]); 
        } else {
            c.insert(arr[r]); 
        }
        ans += (b.size() >= k); 
       }

        cout << ans << "\n"; 
    }
}