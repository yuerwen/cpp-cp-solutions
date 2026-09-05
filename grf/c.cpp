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
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<int> dist (n+1, 1e18); 

    dist[1] = 0; 
    pq.push({0, 1}); 

    while (!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        int d = curr.first;
        int node = curr.second; 

        if (d > dist[node]) continue; 

        for (auto &ne : adj[node]){
            int w = ne.first;
            int u = ne.second;

            if (dist[w] > dist[node] + u){
                dist[w] = dist[node] + u; 
                pq.push({dist[w], w}); 
            }
        }
    }
    
    for (int i = 1; i <= n; i++){
        cout << dist[i] <<" ";
    }
    
}