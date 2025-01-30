// SPACE OPTIMIZED
/*
Problem Name: Grid Paths
Problem Link: https://cses.fi/problemset/task/1638
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>
 
#define ln '\n'
#define ll long long
const int MOD = 1000000007;
 
using namespace std;
 
// SPACE OPTIMISED
 
int main(){
    int n;
    cin >> n;
 
    vector<ll> lastRow(n+1, -1);
 
    for (int i = 1; i <= n; i++){
        vector<ll> currentRow(n+1, 0);
        if (i == 1){
            currentRow[0] = -1;
            currentRow[1] = 1;
        }
        for (int j = 1; j <= n; j++){
            char c;
            cin >> c;
            if (c == '*'){
                currentRow[j] = -1;
            }
            if (currentRow[j] != -1){
                if (currentRow[j-1] != -1)
                    currentRow[j] = (currentRow[j] + currentRow[j-1]) % MOD;
                if (lastRow[j] != -1)
                    currentRow[j] = (currentRow[j] + lastRow[j]) % MOD;
            }   
        }
        lastRow = currentRow;
    }
    
    cout << (lastRow[n] == -1 ? 0 : lastRow[n]) << ln;
 
    return 0;
}
