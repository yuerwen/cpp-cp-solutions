#include<bits/stdc++.h>
using namespace std;

int n, m; 
vector<vector<char>> arr; 
vector<vector<bool>> vis; 
vector<int> di = {0, 0, 1, -1}; 
vector<int> dj = {1, -1, 0, 0}; 
vector<char> dir = {'R', 'L', 'D', 'U'}; 
vector<vector<pair<int, int>>> par;
vector<vector<char>> direc;
int stri, strj, endi, endj; 

bool bfs (int i, int j){
    queue<pair<int, int>> q; 
    q.push({i, j}); 
    vis[i][j] = true; 

    bool found = false; 

    while (!q.empty()){
        auto [a, b] = q.front(); 
        q.pop();
        if ( a == endi && b == endj) return true;

        for (int k = 0; k < 4; k++){
            int nxi = a + di[k], nxj = b + dj[k];
            if (nxi >= 1 && nxi <= n && nxj >= 1 && nxj <= m){
            if (!vis[nxi][nxj] && arr[nxi][nxj] != '#'){
                vis[nxi][nxj] = true; 
                par[nxi][nxj] = {a, b}; 
                direc[nxi][nxj]= dir[k];
                q.push({nxi, nxj}); 
                }
            }
        }
    }
    return false; 
}

signed main(){
    int ans = 0; 
    cin >> n >> m; 
    arr.resize(n+1, vector<char> (m+1)); 
    vis.resize(n+1, vector<bool> (m+1, false));
    par.resize(n+1, vector<pair<int, int>>(m+1, {-1, -1})); 
    direc.resize(n+1, vector<char> (m+1, ' ')); 

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> arr[i][j]; 
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (arr[i][j] == 'A'){
                stri = i; 
                strj = j; 
            } else if (arr[i][j] == 'B'){
                endi = i; endj = j;
            }
            
        }
    }

    if (bfs(stri, strj)){
        cout << "YES \n"; 
        int a = endi, b = endj; 
        string direct; 
        while (a != stri || b != strj){
            direct += direc[a][b];
            auto [p, q] = par[a][b];
            if (p == -1 || q == -1) break; 
            a = p; 
            b = q; 
        }
        
        reverse(direct.begin(), direct.end());
        cout << direct.size() << "\n" << direct << "\n"; 
    } else {
        cout << "NO \n"; 
    }

    
}
