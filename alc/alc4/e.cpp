#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n; 
    map<int, int> resto; 
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b; 
        resto.insert({a, 1});
        resto.insert({b, -1}); 
    }

    int count = 0; 
    int curr = 0; 
    for (const auto& [key, val] : resto){
        curr += val; 
        count = max(curr, count); 
    }

    cout << count ;
}