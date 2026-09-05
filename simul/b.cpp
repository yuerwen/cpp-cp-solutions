#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    string s1; cin >> n >> s1;
    vector<int> jumlO (n, 0), jumlS(n, 0), jumlN(n, 0); 
    int totalO =0, totalS=0, totalN=0; 
    bool N = false; 
    int temp = 0, tempS = 0;
    vector<int> tempSN(n, 0);
    for (int i = n-1; i >= 0; i--){
        if(s1[i] == 'N'){
            totalN++;
            N = true; 
        } else if (s1[i] == 'S'){
            totalS++;
            if (N){
                tempS++;
            }
            tempSN[i] = tempS;
        } 
    }

    int ans = 0; 

    for (int i = 0; i < n; i++){
        if (s1[i] == 'O'){
            
        }
    }

    cout << ans; 
}