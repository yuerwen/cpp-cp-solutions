#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e6; 

vector<int> divisors(MAXN+1, 0); 

void findfactors(){
    for (int i = 1; i <= MAXN; i++){
        for (int j = i; j <= MAXN; j+=i){
            divisors[j]++;
        }
    }
}

signed main(){
    int t; cin >> t; 
    findfactors();
    while (t--){
        int n; cin >> n; 
        cout << divisors[n] << "\n";
    }
}