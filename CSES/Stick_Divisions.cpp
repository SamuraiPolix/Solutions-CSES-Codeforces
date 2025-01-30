/*
Problem Name: Stick Divisions
Problem Link: https://cses.fi/problemset/task/1161
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <queue>
#include <vector>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    
    vector<int> lens (n);

    for (int i = 0; i < n; ++i){
        cin >> lens[i];
    }

    priority_queue<int, vector<int>, greater<int>> minHeap (lens.begin(), lens.end());

    ll cost = 0;
    while (minHeap.size() > 1){
        int stick1 = minHeap.top();
        minHeap.pop();
        int stick2 = minHeap.top();
        minHeap.pop();

        cost += stick1 + stick2;

        minHeap.push(stick1+stick2);
    }

    cout << cost << ln;

    return 0;

}
