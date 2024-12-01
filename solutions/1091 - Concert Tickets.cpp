/*
Problem Name: Concert Tickets
Problem Link: https://cses.fi/problemset/task/1091
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <set>
#include <vector>
#include <utility>

using std::cin, std::cout, std::set, std::vector, std::pair;

#define ln '\n'

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> actualP(n);
    vector<int> desiredP(m);
    set<pair<int, int>> sortedSet;
    
    for (int i = 0; i < n; ++i){
        cin >> actualP[i];
        sortedSet.insert({actualP[i], i});
    }
    for (int i = 0; i < m; ++i){
        cin >> desiredP[i];
    }

    for (int i = 0; i < m; ++i){
        auto match = sortedSet.lower_bound({desiredP[i]+1, 0});
        if (match == sortedSet.begin()){
            cout << "-1" << ln;
        }
        else{
            match--;
            cout << (*match).first << ln;
            sortedSet.erase(match);
        }
    }
}
