#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, k; cin >> n >> k;
    set<int> arr;
    for (int i = 2; i <= n; i++){
        arr.insert(i); 
    }

    int fpb = 1; 
    cout << n << " ";
    arr.erase(n);
    while (fpb < k-1){
        for (int i = 2; i <= n-1; i++){
            if (n % i == 0) {
                arr.erase(i); 
                cout << i <<" ";
                fpb++;
            }
        }
    }

    cout << 1 << " ";
    for (auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << " ";
    }
    

}