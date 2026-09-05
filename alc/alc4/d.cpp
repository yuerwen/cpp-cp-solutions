#include <bits/stdc++.h>
using namespace std; 

signed main(){
  int n, k; 
  cin >> n >> k; 
  multiset<int> ms; 
  for (int i = 0; i < n; i++){
    int x; cin >> x;
    ms.insert(x);
  }

  while (k--){
    int q; cin >> q;
    auto it = ms.upper_bound(q); 
    if (it == ms.begin()) cout << -1 << "\n"; 
    else {
    it--; 
    cout << *it << "\n";
    ms.erase(it);
  }

}
}