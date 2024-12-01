/*
Problem Name: Restaurant Customers
Problem Link: https://cses.fi/problemset/task/1619
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <set>
#include <utility>

using std::cin, std::cout, std::set, std::pair;

int main(){
    int customers;

    cin >> customers;

    // "You may assume that all arrival and leaving times are distinct." so we use sets
    set<pair<int, int>> arrivesleaves;

    // each arrive +1, each leave -1
    for (int i = 0; i < customers; ++i){
        int temp;
        cin >> temp;
        arrivesleaves.insert({temp, 1});
        cin >> temp;
        arrivesleaves.insert({temp, -1});
    }

    int count = 0, max = 0;
    for (auto time : arrivesleaves){
        count += time.second;
        if (count > max){
            max = count;
        }
    }

    cout << max;
}
