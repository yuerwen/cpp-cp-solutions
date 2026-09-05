#include <bits/stdc++.h>
using namespace std;
#define int long long 

bool cek (vector<int> &seg, int n, int mid){
    int len = 0, lines = 1; 
    for (auto x : seg){
        if (x > mid) return false; 
        if (x + len > mid){
            lines++; // if more than create new line
            len = x; 
        } else {
            len += x;  // if less add to curr line
        }
    }

    return lines <= n; 
}


signed main(){
    int n; cin >> n; 
    string ad; 
    cin.ignore();
    getline(cin, ad); 

    vector<int> seg; 
    int curr = 0; 
    for (char s : ad){
        curr++;
        if (s == '-' || s == ' '){
            seg.push_back(curr); 
            curr = 0; //segment sizes :o 
        }
    }

    if (curr > 0){
        seg.push_back(curr);
    }

    int l = 1, r = ad.size(), ans = ad.size();
    while (l <= r){
        int mid = l + (r-l)/2; 
        if (cek(seg, n, mid)){ // if this width < lines
            ans = mid; 
            r = mid - 1; 
        } else {
            l = mid + 1;
        }

    }

    cout << ans; 
}