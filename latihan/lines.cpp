#include <bits/stdc++.h>
using namespace std; 

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; 
        string line; 
        int curr = 0, maks = -1; 
        bool check = false;
        for (int i = 0; i < n; i++){
            char x; cin >> x;
            if (x == '#'){
                if (!check) {
                    check = true; 
                    curr++;
                } else {
                    curr++;
                }
            } else {
                if (check){
                    check = false; 
                    maks = max(curr, maks); 
                    curr = 0; 
                }
            }
        }

        int ans = 0; 

        while (maks - 2 > 2){
            ans++; 
            maks -= 2; 
        } 
        ans++; 

        cout << ans << "\n"; 
    }
}