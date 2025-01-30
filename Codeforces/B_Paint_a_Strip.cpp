/*
Problem Name: B. Paint a Strip
Problem Link: https://codeforces.com/contest/2040/problem/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <unordered_map>
#include <vector>

#define ln '\n'

using std::cin, std::cout, std::unordered_map, std::vector;

int main(){
    int tt;
    cin >> tt;

    int res;
    while (tt--){
        int size;
        cin >> size;
        int temp = size;
        int count = 2;

        while (temp >= 5){
            count++;
            temp -= ((temp)/2);
            temp--;
        }

        if (size <= 2){
            cout << size << ln;
        }
        else {
            cout << count << ln;
        }
    }

    return 0;
}
