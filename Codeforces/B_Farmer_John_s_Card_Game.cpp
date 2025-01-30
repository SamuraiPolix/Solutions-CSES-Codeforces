/*
Problem Name: B. Farmer John's Card Game
Problem Link: https://codeforces.com/contest/2060/problem/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>
#include <set>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int co, ca;
        cin >> co >> ca;
        
        int arr[co*ca];

        int temp;
        for (int i = 0; i < co*ca; i++){
            cin >> temp;
            arr[temp] = i / ca;
        }

        bool bad = false;

        for (int i = co; i < co*ca; i+=co){
            for (int j = 0; j < co; j++){
                if (arr[j+i] != arr[j]){
                    bad = true;
                    break;
                }
            }
            if (bad) break;
        }

        if (bad) cout << -1 << ln;
        else { for (int i = 0; i < co; i++){
            cout << arr[i]+1 << " ";
        }; cout << ln;}



    }
    return 0;
}
