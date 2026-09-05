#include <bits/stdc++.h>
using namespace std; 

const int MAX = 100000;
int spf[MAX + 1]; 

void sieve() {
    for (int i = 1; i <= MAX; i++) spf[i] = i;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (spf[i] == i) { 
            for (int j = i * i; j <= MAX; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    sieve();

    for (int i = 2; i <= MAX; ++i) {
        cout << i << ":";
        
        int temp = i;
        
        while (temp > 1) {
            int p = spf[temp];
            
            cout <<" " << p;
            
            while (temp % p == 0) {
                temp /= p;
            }
        }
        cout << "\n";
    }

    return 0;
}
