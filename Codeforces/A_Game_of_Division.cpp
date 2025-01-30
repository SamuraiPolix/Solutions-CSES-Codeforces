/*
Problem Name: A. Game of Division
Problem Link: https://codeforces.com/contest/2040/problem/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <unordered_map>
#include <vector>

#define ln '\n'

using std::cin, std::cout, std::unordered_map, std::vector;

int main(){
    int tests;
    cin >> tests;

    for (int test = 0; test < tests; ++test){
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        vector<int> modCount(k, 0);
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
            modCount[arr[i] % k]++;
        }

        int chosenIndex = -1;
        for (int i = 0; i < n; ++i) {
            if (modCount[arr[i] % k] == 1) {
                chosenIndex = i + 1;
                break;
            }
        }

        if (chosenIndex != -1) {
            cout << "YES" << ln << chosenIndex << ln;
        } else {
            cout << "NO" << ln;
        }
    }

    return 0;
}
