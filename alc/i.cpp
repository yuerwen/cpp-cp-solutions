#include <bits/stdc++.h>
using namespace std; 
#define int long long

bool custcomp (pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b){
    return a.first.second < b.first.second; 
}

signed main(){
    int t; cin >> t; 
    while (t--){
        int n, m, need; 
        cin >> n >> m >> need; 
        vector<pair<int, int>> tix;
        for (int i = 1; i <= n; i++){
            int x; cin >> x; 
            tix.push_back({x, i}); 
        }   

    sort(tix.begin(), tix.end());

    int total = 0, tcost = 0; 
    vector<pair<pair<int, int>, int>> use; 
    for (int i = 0; i < n; i++){
        while (total < need){
            if ((m < need)){
            total += m; 
            use.push_back({tix[i], m}); 
            need -= m; 
            } else {
            total += need; 
            use.push_back({tix[i], need}); 
            need -= need; 
            }
        }
    }

    sort(use.begin(), use.end(), custcomp); 

    for (int i = 0; i < use.size(); i++){
        int curr = use[i].second; 
        for (int j = i+1; j < use.size(); j++){
            use[j].second += (curr * use[j].second);
        }
    }

    for (int i = 0; i < use.size(); i++){
        tcost += use[i].second;  
    }

    cout << tcost << "\n"; 

    }
}