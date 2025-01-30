/*
Problem Name: B. Maximum Substring
Problem Link: https://codeforces.com/problemset/problem/1750/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <string>
#include <vector>

#define ln '\n'
#define ll long long

using namespace std;

ll sum01(ll sums[2]){
    ll res = 0;
    if (sums[0] > 0 && sums[1] > 0){
        res = sums[0] * sums[1];
    }
    else if (sums[0] > 0 && sums[1] == 0){
        res = sums[0] * sums[0];
    }
    else if (sums[0] == 0 && sums[1] > 0){
        res = sums[1] * sums[1];
    }
    return res;
}

int main(){
    int tt;
    cin >> tt;

    int res;
    while (tt--){
        int len;
        cin >> len;
        string str;
        cin.ignore();
        std::getline(cin, str);
        vector<int> arr(len);
        ll sums[2] = {0, 0};

        for (int i = 0; i < len; ++i){
            arr[i] = (int)str[i] - '0';
            sums[arr[i]]++;
        }
        
        ll count = 1, maxCount = 1;
        for (int i = 1; i < len; ++i){
            if (arr[i] == arr[i-1]){
                count++;
            }
            else {
                maxCount = max(maxCount, count);
                count = 1;
            }
        }
        maxCount = max(maxCount, count);

        cout << max(maxCount*maxCount, sum01(sums)) << ln;
    }

    return 0;
}
