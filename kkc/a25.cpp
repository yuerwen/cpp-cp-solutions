#include <bits/stdc++.h>
using namespace std;

signed main(){
    string osnp; 
    cin >> osnp; 
    int x = osnp.size();
    vector<char> realosnp; 
    for (int i = 0; i < x; i++){
        if (osnp[i] == 'P' || osnp[i] == 'S' || osnp[i] == 'N' || osnp[i] == 'O'){
            realosnp.push_back(osnp[i]);
        }
    }

    int o = 0, s = 0, n = 0; 
    vector<int> prefp; 

    for (auto c : realosnp){
        if (c =='O') o++;
        if (c == 'S') s++;
        if (c == 'N') n++;
        if (c == 'P'){
            if (o > 0 && s > 0 && n > 0){
                prefp.push_back(o+s+n); 
            }
        }
    }

    int size = prefp.size();
    int ans = -1; 
    for (int i = 0; i < size; i++){
        ans = max(ans, prefp[i] + size - i); 
    }

    cout << ans; 

}