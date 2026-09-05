#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
#define int long long
#define defllt ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 

int expo (int A, int N){
    int ans; 
    if (N == 0){
        return 1; 
    } else if (N % 2 == 0){
        int temp = expo(A, N/2);
        ans =  temp * temp;
    } else {
        ans =  A * expo(A, N-1);
    }
    return ans % MOD; 
}


signed main(){
    defllt
    string str1, str2; 
    cin >> str1 >> str2;
    int n = str1.size(), end = 0; 
    for (int i = 0; i < n; i++){
        char j = str1[i];
        if (j == '+') end++;
        else end--;
    }

    
    int wifi = 0, cnt= 0; 
    for (int i = 0; i < n; i++){
        char j = str2[i];
        if (j == '+') wifi++;
        else if (j == '-') wifi--;
        else cnt++;
    }

    int valid = 0; 

    for (int mask = 0; mask < (1LL << cnt); mask++){
        int pos = wifi; 
        for (int i = 0; i < cnt; i++){
            if ((1 << i) & mask) pos++;
            else pos--; //check every possibility
            // every number up until 2^q-1; 
        }
        if (pos == end) valid++;
    }
    int total = expo(2, cnt); 

    cout << fixed << setprecision(12) << (double)valid/total << "\n";

}