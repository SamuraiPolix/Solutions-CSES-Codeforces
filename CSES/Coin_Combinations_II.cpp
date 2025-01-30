/*
Problem Name: Coin Combinations II (DP)
Problem Link: https://cses.fi/problemset/task/1636
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>
 
#define ln '\n'
#define ll long long
const int MOD = 1000000007;
 
using namespace std;
 
int main(){
    int n, x;
    cin >> n >> x;
 
    vector<int> coins(n);
    vector<vector<int>> dp(n+1, vector<int> (x+1, 0));
 
    for (int i = 0; i < n; i++){
        cin >> coins[i];
        dp[i][0] = 1;
    }
 
    for (int j = n-1; j >= 0; j--){
        for (int i = 1; i <= x; i++){    
            int skip = dp[j+1][i];
            int pick = 0;
            if (i >= coins[j]){
                pick = dp[j][i-coins[j]];
            }
            dp[j][i] = (skip + pick) % MOD;
        }
    }
 
    cout << dp[0][x] << ln;
    return 0;
}
