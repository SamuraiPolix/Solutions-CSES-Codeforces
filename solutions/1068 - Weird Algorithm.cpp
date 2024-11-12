/*
Problem Name: Weird Algorithm
Problem Link: https://cses.fi/problemset/task/1068
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>

using std::cin, std::cout;

void solve(unsigned long n){
    while (n != 1){
        cout << n << " ";
        if (n % 2 == 0){
            n /= 2;
        }
        else {
            n = 3*n+1;
        }
    }
    cout << n;
}

int main(){
    unsigned long n = -1;
    cin >> n;

    solve(n);
}
