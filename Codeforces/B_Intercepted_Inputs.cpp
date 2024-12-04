/*
Problem Name: B. Intercepted Inputs
Problem Link: https://codeforces.com/problemset/problem/2037/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <unordered_set>

#define ln '\n'

using std::cin, std::cout, std::unordered_set;

int main(){
    int tests;
    cin >> tests;

    for (int test = 0; test < tests; test++){
        int length;
        cin >> length;
        unordered_set<int> seen;

        bool found = false;
        for (int i = 0; i < length; i++){
            int num;
            cin >> num;
            if (!found){
                if ((length - 2) % num == 0){   // num divides grid
                    int pair = (length - 2) / num;  // looking for
                    if (seen.count(pair)){  // pair was seen
                        cout << num << " " << pair << ln;
                        found = true;
                    }
                }
                seen.insert(num);
            }
        }
    }
}
