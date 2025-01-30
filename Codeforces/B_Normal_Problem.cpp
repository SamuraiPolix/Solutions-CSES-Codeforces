/*
Problem Name: B. Normal Problem
Problem Link: https://codeforces.com/contest/2044/problem/B
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <unordered_map>
#include <vector>

#define ln '\n'
#include <string>

using std::cin, std::cout, std::unordered_map, std::vector;

int main(){
    int tt;
    cin >> tt;

    do{
        std::string str;
        getline(cin, str);

        for (int i = str.length()-1; i >= 0; i--){
            if (str[i] == 'q'){
                cout << 'p';
            }
            else if (str[i] == 'p'){
                cout << 'q';
            }
            else {
                cout << str[i];
            }
        }
        cout << ln;
    }while(tt--);

    return 0;
}
