/*
Problem Name: A. Fibonacciness
Problem Link: https://codeforces.com/contest/2060/problem/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int arr[6];
        cin >> arr[1] >> arr[2] >> arr[4] >> arr[5];
        
        if (arr[1] + arr[2] == arr[5] - arr[4] &&  arr[5] - arr[4] == arr[4] - arr[2])
            cout << 3 << ln;
        else if (arr[1] + arr[2] == arr[5] - arr[4] || arr[5] - arr[4] == arr[4] - arr[2] || arr[1] + arr[2] == arr[4] - arr[2])
            cout << 2 << ln;
        else
            cout << 1 << ln;
    }
    return 0;
}
