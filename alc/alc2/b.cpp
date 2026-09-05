#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n; 
    vector<int> arr; 
    for (int i = 0; i < n; i++){
        int x; cin >> x; 
        arr.push_back(x);
    }

    int maxx = 0; 

   for (int x : arr){
     maxx = max(maxx, x); 
   }

    vector<int> freq (maxx+1, 0);

    for (int x : arr){
        freq[x]++;
    }
    int ans = 1; 
    for (int i = maxx; i >= 1; i--){
        int count = 0; 
        for (int j = i; j <= maxx; j += i){
            count+=freq[j]; 

            if (count >= 2){
                cout << i; 
                return 0; 
            }
        }
    }

    cout << ans;

}