#include <bits/stdc++.h>
using namespace std;

vector<bool> cek (1001, true);
vector<int> res; 

vector<int> sieve (){
    cek[0] = false;
    cek[1] = false; 
    for (int i = 2; i <= 1000; i++){
        if (cek[i]){
            res.push_back(i); 
            for (int j = i*i; j <= 1000; j+=i){
                cek[j] = false; 
            }
        }
    }

    return res; 
}

signed main(){
    sieve();
    int n, k; cin >> n >> k; 
    int cnt = 0; 
    for (int i = 1; i <= n; i++){
        int ans1 = res[i] + res[i-1];
        int ans2 = res[i] + res[i+1]; 
        if (cek[ans1] || cek[ans2]) cnt++;
    }

    if (cnt < k) cout << "NO";
    else cout << "YES"; 
}

