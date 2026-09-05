#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main(){
    int n; cin >> n;
    map <int, int> save; 
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        save.insert({x, i}); 
    }
    int i = -1, count = 0; 
    while (count < save.size()) {
        cout << save[i] << ' ';
        i = save[i]; 
        count++;
    }

}