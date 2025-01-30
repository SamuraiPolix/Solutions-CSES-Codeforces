/*
Problem Name: Coin Combinations I
Problem Link: https://cses.fi/problemset/task/1635
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>

#define ln '\n'
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    vector<ll> dp(x+1, 0);
    dp[0] = 1;

    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (coins[j] <= i){
                dp[i] = (dp[i] + dp[i-coins[j]]) % MOD;
            }
        }
    }

    cout << dp[x] << ln;
    return 0;
}
