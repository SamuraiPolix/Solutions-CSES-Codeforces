/*
Problem Name: Watermelon
Problem Link: https://codeforces.com/problemset/problem/4/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>

using std::cin, std::cout;

int main(){
    int w;
    cin >> w;

    if (w % 2 == 0 && w != 2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
