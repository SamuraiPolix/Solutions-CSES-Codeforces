/*
Problem Name: C. Game of Mathletes
Problem Link: https://codeforces.com/contest/2060/problem/C
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>
#include <algorithm>

#define ln '\n'
#define ll long long

using namespace std;

int main(){
    int tt;
    cin >> tt;

    while (tt--){
        int n, k;
        cin >> n >> k;

        int count = 0;

        vector<int> vec (k+1, 0);

        int temp;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (temp < k){
                vec[temp]++;
            }
        }

        int left = 1, right = k-1;

        while (left < right){
            count += min(vec[left], vec[right]);
            if (min(vec[left], vec[right]) > 0){
            }
            left++; right--;
        }
        if (left == right){
            count +=vec[left]/2;
        }

        cout << count << ln;


    }
    return 0;
}
