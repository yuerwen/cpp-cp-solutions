#include <bits/stdc++.h>
using namespace std;
#define int long long 


signed main (){
    int n, m; 
    cin >> n >> m; 
    while (m > n){
        m -= n; 
    }

    cout << m;
}