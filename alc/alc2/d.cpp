#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n; cin >> n; 
    int fre1 = 0, fre2=0; 
    for (int i = 0; i <n; i++){
        int x; cin >> x;
        if (x==1) fre1++;
        else if (x==2) fre2++;
    }

    if (fre2!= 0) {
        cout << "2 ";
        fre2--; 
    }
    if (fre1 != 0) {
        cout << "1 "; 
        fre1--; 
    }
    while (fre2 > 0) {
        cout << "2 ";
        fre2--; 
    }
    while (fre1 > 0){
        cout << "1 ";
        fre1--; 
    }
}