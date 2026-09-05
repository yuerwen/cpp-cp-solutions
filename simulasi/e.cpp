#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; 
        vector<pair<int, int>> cards; 
        for (int i = 0; i < n; i++){
            int x, y; cin >> x >> y; 
            cards.push_back({x, y}); 
        }

        sort(cards.begin(), cards.end()); 
        // 
    }
}