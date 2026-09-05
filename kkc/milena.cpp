#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; 
        vector<int> arr; 
        for (int i = 0; i < n-1; i++){
            int x; cin >> x;
            arr.push_back(x);
        }

        int curmax; cin >> curmax; 
        int ans = 0;  
        for (int i = n-2; i >= 0; i--){
            if (arr[i] > curmax){
                int x = arr[i]; 
                int pecah = ceil((long double)arr[i] / curmax); 
                curmax = arr[i] / pecah; 
                pecah--; 
                ans += pecah; 
            } else {
                curmax = arr[i]; 
            }
        }

        cout << ans << endl; 
    }
}