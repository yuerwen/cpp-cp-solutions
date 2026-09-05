#include <bits/stdc++.h>
using namespace std; 
#define int long long

vector<vector<pair<int, int>>> adj;

signed main(){
    int n, m; 
    cin >> n >> m; 
    adj.resize(n+1); 
    for (int i = 0; i < m; i++){
        int x, y, z; cin >> x >> y >> z;
        adj[x].push_back({y, z}); 
        adj[y].push_back({x, z}); 
    }

    int x = 0; 

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<bool> vis (n+1, false); 
    vector<int> minn (n+1, 1e18); 
    int ans = 0; 

    pq.push({0, 1}); 

    while (!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        int d = curr.first;
        int node = curr.second; 
    
        if (vis[node]) continue; 

        ans += d; 
        vis[node] = true; 
        x++;


        for (auto &ne : adj[node]){
            if (!vis[ne.first]){
                pq.push({ne.second, ne.first}); 
            }
        }
    }

       if (x == n) cout << ans <<" ";
       else cout << "IMPOSSIBLE"; 
    
}