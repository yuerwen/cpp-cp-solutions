#include <bits/stdc++.h>
using namespace std; 

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; 
        vector<int> team(3*n);
        for (int i = 0; i < 3*n; i++){
            cin >> team[i];
        }

        sort(team.begin(), team.end(), greater<int>());

        int ans = 0; 


        for (int i = 1; i <= n; i++){
            ans += team[2*i-1];
        }

        cout << ans << endl ; 


        
    }
}