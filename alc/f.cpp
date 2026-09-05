#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t; cin >> t; 
    while (t--){
        string x, y; 
        cin >> x >> y; 
        int sz = x.size();
        bool swapped = false; 
        int temp1, temp2; 
        for (int i = 0; i < sz; i++){
            if (x[i] == y[i]) continue; 
            if (y[i] > x[i]){
                if (!swapped) {
                    swap(x[i], y[i]); 
                    swapped = true; 
                } 
            } else if (y[i] < x[i]){
                if (swapped) {
                    swap(x[i], y[i]); 
                } else {
                    swapped = true; 
                }
            }
        }

        cout << x << "\n" << y << "\n";
    }
}