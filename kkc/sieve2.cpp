#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cek (ll n){
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0 || n% 3 == 0) return false; 

    for (ll i = 5; i*i <= n; i+= 6){
        if (n % i == 0 || n % (i+2) == 0) return false; 
    }

    return true; 
}

signed main(){
    ll n; cin >> n; 
    if (cek(n)) cout << "YES" << endl; 
    else cout << "NO" << endl; 
}