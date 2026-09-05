#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    int batas = 101; 

    for (int i = 1; i <= n; i++){
        int x; cin >> x; 
        arr.push_back(x);
        if (i == k){
            batas = x; 
        }
    }
    
    int count = 0; 
    for (int x : arr){
        if (x < batas) break; 
        if (x == 0) continue; 
        count++;
    }

    cout << count << "\n"; 
}