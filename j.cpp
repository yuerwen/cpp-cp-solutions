#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n; 
    vector<int> books(n);
    for (int i = 0; i < n; i++){
        cin >> books[i];
    }

    sort(books.begin(), books.end());
    int maxx = books[n-1];

    int sum = 0; 

    for (int i = 0; i < n-1; i++){
        sum += books[i];
    }

    if (sum <= maxx){
        cout << maxx * 2;
    } else cout << sum + maxx; 

}