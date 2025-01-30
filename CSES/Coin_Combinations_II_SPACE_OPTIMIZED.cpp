// SPACE OPTIMIZED
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
 
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }
 
    vector<int> nextState(x+1, 0);
    nextState[0] = 1;
 
    for (int j = n-1; j >= 0; j--){
        vector<int> currentState(x+1, 0);
        currentState[0] = 1;
        for (int i = 1; i <= x; i++){    
            int skip = nextState[i];
            int pick = 0;
            if (i >= coins[j]){
                pick = currentState[i-coins[j]];
            }
            currentState[i] = (skip + pick) % MOD;
        }
        nextState = currentState;
    }
 
    cout << nextState[x] << ln;
    return 0;
}