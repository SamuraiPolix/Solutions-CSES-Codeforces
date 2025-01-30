// Recursive
/*
Problem Name: Removing Digits
Problem Link: https://cses.fi/problemset/task/1637
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>
 
#define ln '\n'
#define ll long long
const int MOD = 1000000007;
 
using namespace std;
 
ll solve (vector<ll>& dp, int n){
    if (dp[n] < INT_MAX-8) return dp[n];
 
    int temp = n;
    while (temp > 0){
        if (temp %10 != 0)
            dp[n] = min(dp[n], solve(dp, n-(temp%10)));
        temp /= 10;
    }
 
    dp[n] += 1;
 
    return dp[n];
}
 
int main(){
    int n;
    cin >> n;
 
    vector<ll> dp (n+1, INT_MAX-8);
    dp[0] = 0;
    
    cout << solve(dp, n) << ln;
 
    return 0;
