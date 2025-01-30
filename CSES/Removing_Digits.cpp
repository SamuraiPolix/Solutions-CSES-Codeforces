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
 
int main(){
    int n;
    cin >> n;
 
    vector<int> dp (n+1, INT_MAX-10);
    dp[0] = 0;
 
    for (int i = 1; i <= n; i++){
        int temp = i;
        while (temp > 0){
            if (temp % 10 != 0)
                dp[i] = min(dp[i], dp[i - (temp % 10)] + 1);
            temp /= 10;
        }
    }
 
    cout << dp[n] << ln;
 
    return 0;
}
