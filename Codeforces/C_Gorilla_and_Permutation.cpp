/*
Problem Name: C. Gorilla and Permutation
Problem Link: https://codeforces.com/problemset/problem/1992/C
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <set>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int n, m, k;
        cin >> n >> m >> k;

        for (int i = n; i >= k ; --i){
            cout << i << " ";
        }
        bool dir = false;
        int x = 0;
        for (int i = 1; i < k-m ; ++i){
            if (dir){
                cout << k-x << " ";
            }
            else {
                x++;
                cout << m+x << " ";
            }
            dir = !dir;
        }
        for (int i = 1; i <= m ; ++i){
            cout << i << " ";
        }
        cout << ln;

    }

    return 0;
}
