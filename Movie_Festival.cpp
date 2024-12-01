/*
Problem Name: Movie Festival
Problem Link: https://cses.fi/problemset/task/1629
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using std::cin, std::cout, std::vector, std::pair;

int main(){
    int movies;

    cin >> movies;

    vector<pair<int, int>> intervals(movies);

    for (int i = 0; i < movies; i++){
        cin >> intervals[i].first >> intervals[i].second;
    }

    sort(intervals.begin(), intervals.end(), [](pair<int, int>& a, pair<int,int>& b){return a.second < b.second;});

    int lastFinish = -1;
    int count = 0;
    for (int i = 0; i < movies; i++){
        if (intervals[i].first > lastFinish){
            lastFinish = intervals[i].second;
            count++;
        }
    }

    cout << count;
}
