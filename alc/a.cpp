#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; 
        vector <int> arr(n+1);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int l = 0, r = n-1;
        bool ans = true; 
        for (int i = 1; i <= n; i++){
            if (arr[l] == i){
                l++; 
            } else if (arr[r] == i){
                r--; 
            } else {
                ans = false; 
            }
        }

    if (ans) cout << "YES \n" ;
    else cout << "NO \n";
        
    }
}