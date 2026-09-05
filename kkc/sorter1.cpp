#include <bits/stdc++.h>
using namespace std; 

signed main(){
    int n; cin >> n; 
    set<int> weset; 
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        weset.insert(x); 
    }

    cout << weset.size() << endl;

}