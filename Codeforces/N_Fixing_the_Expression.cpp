/*
Problem Name: Fixing the Expression
Problem Link: https://codeforces.com/problemset/problem/2038/N
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <cstdio>

#define ln '\n'

using std::cin, std::cout, std::string, std::getline;

int main(){
    int tests;
    cin >> tests;

    string str;
    for (int test = 0; test < tests; test++){
        cin >> str;
        if (((int)str[0])+'0' > ((int)str[2])+'0')
            cout << str[0] << ">" << str[2];
        else if (((int)str[0])+'0' == ((int)str[2])+'0')
            cout << str[0] << "=" << str[2];
        else if (((int)str[0]+'0' < (int)str[2])+'0')
            cout << str[0] << "<" << str[2];
        cout << ln;
    }
}
