/*
Problem Name: Increasing Array
Problem Link: https://cses.fi/problemset/task/1094
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>

using std::cin, std::cout;

int main(){
    unsigned int n;
    cin >> n;

    unsigned int prev, curr;
    cin >> prev;

    long long count = 0;

    for (unsigned long i = 1; i < n; i++){
        cin >> curr;
        if (curr < prev){
            count += prev-curr;
            curr = prev;
        }
        prev = curr;
    }
    cout << count;
}
