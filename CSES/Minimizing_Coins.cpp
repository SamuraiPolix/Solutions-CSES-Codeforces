/*
Problem Name: Minimizing Coins
Problem Link: https://cses.fi/problemset/task/1634
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    vector<ll> dp(x+1, LONG_LONG_MAX-x);
    dp[0] = 0;

    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (coins[j] <= i){
                dp[i] = min (dp[i], dp[i-coins[j]] + 1);
            }
        }
    }

    cout << (dp[x] >= LONG_LONG_MAX - x ? -1 : dp[x]) << ln;
    return 0;
}
