#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> fib (1e18+1); 

void fibonacci (){
    fib[0] = 0; 
    fib[1] = 1; 
    for (int i = 2; i <= 1e18; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}

signed main(){
    fibonacci(); 
    int n; cin >> n;
    cout << fib[n];
}