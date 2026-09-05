#include <bits/stdc++.h>
using namespace std; 

signed main(){
    int n; cin >> n; 
    int minn = 1e5 + 2; 
    int x; 
    for (int i = 0; i < n; i++){
        cin >> x;
        minn = min(abs(x), minn); 
        if (minn == 0) break; 
    }

    cout << minn; 

}