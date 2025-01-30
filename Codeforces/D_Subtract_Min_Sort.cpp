/*
Problem Name: D. Subtract Min Sort
Problem Link: https://codeforces.com/contest/2060/problem/D
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>
#include <algorithm>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++){
            cin >> vec[i];
        }

        bool bad = false;
        for (int i = 0; i < n-1; i++){
            int mi = min(vec[i], vec[i+1]);
            vec[i] -= mi;
            vec[i+1] -= mi;

            // if (vec[i-1] < vec[i] && vec[i] > vec[i+1]){
            //     bad = true;
            //     break;
            // }
        }
        for (int i = 0; i < n-1; i++){
            if (vec[i] > vec[i+1]){
                bad = true;
                break;
            }
        }
        for (int i = 0; i < n-1; i+=2){
            if (vec[i] > vec[i+1]){
                bad = true;
                break;
            }
        }
        cout << (bad ? "NO" : "YES") << ln;

    }
    return 0;
}
