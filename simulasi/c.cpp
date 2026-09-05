#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k; 

vector<int> findfct (int x){
    vector<int> res; 
    res.push_back(1);
    for (int i = 2; i * i <= x; i++){
        if (x % i != 0) continue; 
        if (x % i == 0 && i <= k) res.push_back(i);
        if (x/i != i && x/i <= k) res.push_back(x/i);
    }

    return res; 
}

bool cek (int n){
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0 || n% 3 == 0) return false; 

    for (int i = 5; i*i <= n; i+= 6){
        if (n % i == 0 || n % (i+2) == 0) return false; 
    }

    return true; 
}

signed main(){
    int t; cin >> t; 
    while (t--){
        cin >> n >> k;
        if (n >= k){
            int oo = gcd(n, k); 
            if (cek(n) && n != k) cout << n << "\n";
            else if (n % k == 0) cout << n/k << "\n";
            else {
                vector<int> fct = findfct(n);
                int ans = *max_element(fct.begin(), fct.end()); 
                cout << n / ans << "\n";
                // for (int x : fct){
                //     cout << x << " ";
                // }
            }
        }
         else {
                cout << 1 << "\n";
        }
    }
}
