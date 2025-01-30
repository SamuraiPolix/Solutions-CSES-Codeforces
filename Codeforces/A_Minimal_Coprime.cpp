/*
Problem Name: A. Minimal Coprime
Problem Link: https://codeforces.com/contest/2063/problem/A
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
    int tt;
    cin >> tt;

    while (tt--){
        int l, r;
        cin >> l >> r;

        if (l == 1 && r == 1){
            cout << 1 << ln;
            continue;
        }

        cout << r-l << ln;
    }
    return 0;
}
