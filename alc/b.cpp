#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, x;
    cin >> n >> x; 
    vector<int> weight(n);
    for (int i = 0; i < n; i++){
        cin >> weight[i];
    }

    sort(weight.begin(), weight.end());

    int curr = 0; 
    int gondola = 1; 
    for (int i = 0; i < n; i++){
        curr+= weight[i];
        if (curr > x){
            curr = weight[i];
            gondola++;
        }
    }

    cout << gondola; 
}