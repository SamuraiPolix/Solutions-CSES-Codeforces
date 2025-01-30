/*
Problem Name: C. Hard Problem
Problem Link: https://codeforces.com/contest/2044/problem/C
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <vector>

#define ln '\n'
#define ll long long
#include <string>

using std::cin, std::cout, std::unordered_map, std::vector;

int main(){
    int tt;
    cin >> tt;

    while(tt--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        ll sum = 0;

        sum = std::min(a, m) + std::min(b, m) + std::min(std::max(c, 0), 2*m-(std::min(a, m) + std::min(b, m)));

        cout << sum << ln;
    }

    return 0;
}
