/*
Problem Name: A. Kevin and Arithmetic
Problem Link: https://codeforces.com/contest/2061/problem/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>
// #include <algorithm>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int n;
        cin >> n;

        int countOdd = 0, countEven = 0;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if (temp % 2 == 0)
                countEven++;
            else
                countOdd++;
        }

        if (countEven > 0)
            cout << 1 + countOdd << ln;
        else
            cout << countOdd-1 << ln;

    }
    return 0;
}
