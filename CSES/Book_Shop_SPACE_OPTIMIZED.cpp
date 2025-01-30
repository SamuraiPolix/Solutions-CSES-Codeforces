// SPACE OPTIMIZED
/*
Problem Name: Book Shop (DP)
Problem Link: https://cses.fi/problemset/task/1158
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <bits/stdc++.h>

#define ln '\n'
#define ll long long
const int MOD = 1000000007;

using namespace std;

// Optimised space

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> cost (n);
    vector<int> val (n);
    vector<int> lastRow(x+1, 0);

    for (int i = 0; i < n; i++){
        cin >> cost[i];
    }

    for (int i = 0; i < n; i++){
        cin >> val[i];
    }

    for (int i = 1; i <= n; i++){
        vector<int> currentRow (x+1, 0);
        for (int j = x; j >= 0; j--){
            // picked or skipped curr item
            int pick = 0;
            int skip = lastRow[j];
            if (cost[i-1] <= j)
                pick = val[i-1] + lastRow[j-cost[i-1]];
            currentRow[j] = max(skip, pick);
        }
        lastRow = currentRow;
    }

    cout << lastRow[x] << ln;

    return 0;
}
