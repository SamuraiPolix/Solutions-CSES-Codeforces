/*
Problem Name: Drinks
Problem Link: https://codeforces.com/problemset/problem/200/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <iomanip>

#define ln '\n'

using std::cin, std::cout;

int main(){
    int n;
    cin >> n;

    long double temp;
    long double sumP = 0;
    for (int i = 0; i < n; i++){
        cin >> temp;
        sumP += temp/100;
    }

    cout << std::fixed << std::setprecision(12) << sumP*100/n;
}
