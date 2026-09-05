#include<bits/stdc++.h>
using namespace std;
#define int long long 

vector<vector<char>> arr; 
vector<vector<bool>> vis; 
vector<int> di = {0, 0, 1, -1}; 
vector<int> dj = {1, -1, 0, 0}; 
int n, m; 

void dfs (int i, int j){
    vis[i][j] = true; 
    for (int k = 0; k < 4; k++){
        int nxi = i + di[k], nxj = j + dj[k]; 
        if (nxi <= n && nxi >= 1 && nxj >= 1 && nxj <= m && !vis[nxi][nxj]){
            if (arr[nxi][nxj] == '.') dfs(nxi, nxj);
        }
    }
}

signed main(){
    int ans = 0; 
    cin >> n >> m; 
    arr.resize(n+1, vector<char> (m+1)); 
    vis.resize(n+1, vector<bool> (m+1, false));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> arr[i][j]; 
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (arr[i][j] == '.' && !vis[i][j]){
                ans++;
                dfs(i, j); 
            }
        }
    }

    cout << ans ; 

}
