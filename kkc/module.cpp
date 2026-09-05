#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;

int expo (int A, int N){
    if (N == 0){
        return 1; 
    } else if (N % 2 == 0){
        int temp = expo(A, N/2);
        return temp * temp;
    } else {
        return A * expo(A, N-1);
    }
}

signed main(){
    int t; cin >> t; 
    while (t--){
        int a, b; cin >> a>> b; 
        cout << expo (a, b) % MOD<< endl; 
    }
}