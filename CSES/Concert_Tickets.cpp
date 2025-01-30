/*
Problem Name: Concert Tickets
Problem Link: https://cses.fi/problemset/task/1091
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>

#define ln '\n'
#define ll long long

using std::cin, std::cout, std::vector;

int main(){
    int ob, ba, qu;
    cin >> ob >> ba >> qu;

    vector<vector<int>> vec (ba);
    for (int i = 0; i < ob; ++i){
        vec[0].push_back(i);
    }

    while (qu--){
        char c;
        int a, b;
        cin >> c >> a >> b;

        if (c == 's'){
            if (!vec[a].empty()){
                int temp = vec[a].back();
                vec[a].pop_back();
                vec[b].push_back(temp);
            }
        }
        else if (c == 'c'){
            if (b < 0 || b >= vec[a].size()) {
                cout << -1 << "\n";
            } else {
                cout << vec[a][b] << "\n";
            }
        }
    }
    return 0;
}
