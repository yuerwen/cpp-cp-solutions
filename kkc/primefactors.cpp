#include <bits/stdc++.h>
using namespace std; 
#define int long long

signed main(){
    int n; cin >> n; 
    int num = n; 
    
    map<int, int> factors;


    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            while (n%i ==0){
            if (factors.find(i) == factors.end()){
                factors.insert({i, 1}); 
            } else {
                factors[i]++;
            }
            n/=i; 
        }
        }

}
    if (n > 1){
        factors.insert({n, 1}); 
    }

    cout << num << " = "; 
    for (auto it = factors.begin(); it!= factors.end(); it++){
        cout << it->first << " ^ " << it->second; 
        if ((next(it) != factors.end())) cout << " * "; 
    }

}