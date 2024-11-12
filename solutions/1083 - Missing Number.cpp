/*
Problem Name: Missing Number
Problem Link: https://cses.fi/problemset/task/1083
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <list>

using std::cin, std::cout;

int main(){
    unsigned long n;
    cin >> n;

    unsigned long totalSum = (n*(1+n))/2;

    unsigned long temp;
    while (n > 1){
        cin >> temp;
        totalSum -= temp;
        n--;
    }

    cout << totalSum;
    return 0;
}
