/*
Problem Name: Permutations
Problem Link: https://cses.fi/problemset/task/1070
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>

using std::cin, std::cout;

int main(){
    unsigned long n;
    cin >> n;

    if (n == 2 || n == 3){
        cout << "NO SOLUTION ";
        return 0;
    }

    unsigned long i;
    for (int j = 2; j > 0; j--){
        i = j;
        for (i = j; i <= n; i += 2){
            cout << i << " ";
        }
    }

    return 0;
}
