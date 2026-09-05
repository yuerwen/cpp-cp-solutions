#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int t; cin >> t;
    while (t--){
        int n, k; 
        cin >> n >> k; 
        vector<pair<pair<int, int>, int >> casino;
        for (int i = 0; i < n; i++){
            int a, b, c; 
            cin >> a >> b >> c;
            casino.push_back({{a, b}, c});
        }

        sort(casino.begin(), casino.end()); 
        
        for (int i = 0; i < n; i++){
            if (k >= casino[i].first.first && k <= casino[i].first.second && k <= casino[i].second){
                k = casino[i].second;
            }
        }

        cout << k << "\n"; 

    }
}