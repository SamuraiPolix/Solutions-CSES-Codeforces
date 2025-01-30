/*
Problem Name: B. Subsequence Update
Problem Link: https://codeforces.com/contest/2063/problem/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int tt;
    cin >> tt;
    while (tt--) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);
 
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        } 
 
        r = min(r, n);
        l = max(l, 1LL);

        vector<ll> left, right;
 
        for (ll i = 0; i < r; i++) {
            left.push_back(arr[i]);
        }
 
        for (ll i = l - 1; i < n; i++) {
            right.push_back(arr[i]);
        }
 
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
 
        ll rangeLen = min(min(r - l + 1, r), n - (l - 1));
        ll leftSum = 0, rightSum = 0;
        for (ll i = 0; i < rangeLen; i++) {
            if (i < left.size()) {
                leftSum += left[i];
            }
            if (i < right.size()) {
                rightSum += right[i];
            }
        }
 
        cout << min(leftSum, rightSum) << "\n";
    }
    return 0;
}
