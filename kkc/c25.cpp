#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
#define int long long
#define yuelle ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 


bool cek (int n){
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0 || n% 3 == 0) return false; 

    for (int i = 5; i*i <= n; i+= 6){
        if (n % i == 0 || n % (i+2) == 0) return false; 
    }

    return true; 
}

int findfactors(int n){ 
    int ans =0; 
    for (int i = 1; i *i <= n; i++){
        if (n % i == 0) {
            if (n / i != i) ans+=2; 
            else ans++;
        }
    }

    return ans; 
}

signed main(){
    yuelle
    int n; cin >> n; 
    int answer = -1; 
    if (cek(n)) answer = n; 
    else {
        vector<int> poss;
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0 && cek(i)) {
                poss.push_back(i);
                if (cek(n/i)) poss.push_back(n/i); 
            }
        }

        int size = poss.size(); 
        int maxx = -1; 
        for (int i = 0; i < size; i++){
            int x = poss[i];
            int total = (x*x) * (n/x); 
            if (findfactors(total) > maxx){
                maxx = findfactors(total);
                answer = x; 
            }
        }
    }
    cout << answer ; 
}