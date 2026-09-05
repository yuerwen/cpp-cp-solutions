#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; 
        //sliding window fixed size
        string str; cin >> str; 
        int twofive = 0; 
        bool twosix = false; 
        string curr; 
        
        for (int ptr1 = 0; ptr1 < n-3; ptr1++){
            int ptr2 = ptr1 + 3; 
            string curr; 
            for (int i = ptr1; i <= ptr2; i++){
            curr += str[i]; 
        }
        if (curr == "2025") twofive++; 
        if (curr == "2026") twosix = true; 
        }

        if (twosix) {
            cout << "0 \n";
        } else {
            if (twofive > 0) cout << 1 << "\n";
            else cout << "0 \n";
        }

    }
}