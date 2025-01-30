/*
Problem Name: B. Kevin and Geometry
Problem Link: https://codeforces.com/contest/2061/problem/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int n;
        cin >> n;

        vector<int> sticks (n);

        for (int i = 0; i < n; i++){
            cin >> sticks[i];
        }

        sort(sticks.rbegin(), sticks.rend());

        vector<int> res;
        int i = 0;
        while (i < sticks.size()-1){
            if (sticks[i] == sticks[i+1]){
                res.push_back(sticks[i]);
                res.push_back(sticks[i]);
                sticks.erase(sticks.begin() + i + 1);
                sticks.erase(sticks.begin() + i);
                if (res.size() == 4){
                    break;
                }
            }
            else {
                i++;
            }
        }

        if (res.size() == 2){
            for (i = 0; i < sticks.size()-1; i++){
                if (sticks[i]-sticks[i+1] < res[0]*2){
                    res.push_back(sticks[i]);
                    res.push_back(sticks[i+1]);
                    break;
                    // i++;
                }
            }
        }
        
        if (res.size() == 4) {
            for (int i = 0; i < 4; i++){
                cout << res[i] << " ";
            }
        }
        else {
            cout << -1;
        }

        cout << ln;
    }
    return 0;
}
