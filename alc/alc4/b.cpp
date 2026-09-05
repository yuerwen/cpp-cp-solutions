#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; 
    while (cin >> n && n != 0){
    stack<int> stk; vector<int> arr; 
    for (int i = 1; i <= n; i++){
        int x; cin >> x; 
        arr.push_back(x);
    }

    int i = 1; 
    for (int x : arr){
        stk.push(x);
        while (!stk.empty() && stk.top() == i) {
            stk.pop();
            i++;
        }
    }

    if (stk.empty()){
        cout << "yes\n";
    } else cout << "no\n"; 
}
}