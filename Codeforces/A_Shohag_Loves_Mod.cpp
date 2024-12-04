/*
Problem Name: Shohag Loves Mod
Problem Link: https://codeforces.com/problemset/problem/2039/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <iomanip>

#define ln '\n'

using std::cin, std::cout;

int main(){
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++){
        int size;
        cin >> size;

        for (int j = 0; j < size; j++){
            cout << 1+j*2 << " ";
        }
        cout << ln;
    }
}
