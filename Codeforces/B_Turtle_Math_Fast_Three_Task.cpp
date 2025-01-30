/*
Problem Name: B. Turtle Math: Fast Three Task
Problem Link: https://codeforces.com/problemset/problem/1933/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>

#define ln '\n'

using std::cin, std::cout;

int main(){
    int tt;
    cin >> tt;

    int res;
    while (tt--){
        int n;
        cin >> n;
        res = -1;

        int sum = 0;
        int modCount[3] = {0, 0, 0};

        for (int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            modCount[temp % 3]++;
        }

        for (int i = 1; i < 3; ++i){
            sum += modCount[i]*i;
        }

        int mod = sum % 3;


        if (mod == 0){
            res = 0;        // good
        }
        else {
            if (modCount[mod] != 0){
                res = 1;
            }
            else {
                if (mod == 1){         
                    res = 2;
                }
                else {      // mod == 2
                    if (modCount[1]%3 >= 1){
                        res = 1;
                    }
                    else {
                        res = 2;
                    }
                }
            }
        }
        
        cout << res << ln;
    }

    return 0;
}
