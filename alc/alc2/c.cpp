#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n; 
    vector<int> arr; 
    for (int i = 0; i < n; i++){
        int x; cin >> x; 
        arr.push_back(x);
    }

    int maxx = 0, minn = 1e6+1; 

   for (int x : arr){
     maxx = max(maxx, x); 
     minn = min(minn, x);
   }

    vector<int> freq (maxx+1, 0);
    vector<bool> mult (maxx+1, true); 

    for (int x : arr){
        freq[x]++;
    }
    int ans = 0; 
    for (int y : arr){
        if (mult[y]){
            for (int i = 2 * y; i <= maxx; i+=y){
                mult[i] = false; 
            }
        }
    }

    for (int x : arr){
        if (mult[x] && freq[x] == 1) ans++;
    }

    cout << ans;

}