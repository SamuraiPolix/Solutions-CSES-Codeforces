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
 
int main(){
    int n;
    cin >> n;
 
    vector<vector<ll>> dp (n+1, vector<ll>(n+1, 0));
    for (int i = 0; i <= n; i++){
        dp[0][i] = -1;
        dp[i][0] = -1;
    }
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            char c;
            cin >> c;
            if (c == '*'){
                dp[i][j] = -1;
            }
        }
    }
    if (dp[1][1] != -1){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                // cout << "dp[" << i << ", " << j << "]: " << dp[i][j];
                if (dp[i][j] != -1){
                    // for (int c = 1; c <= j; c++){
                    //     if (dp[i][j-c] != -1)
                    //         dp[i][j] = (dp[i][j] + dp[i][j-c]) % MOD;
                    //     else
                    //         break;
                    // }
                    if (dp[i][j-1] != -1)
                        dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD;
                    if (dp[i-1][j] != -1)
                        dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
                }   
                // cout << " --> " << dp[i][j] << ln;
            }
        }
    }
    
 
    cout << (dp[n][n] == -1 ? 0 : dp[n][n]) << ln;
 
    return 0;
}

