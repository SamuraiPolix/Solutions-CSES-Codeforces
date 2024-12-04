/*
Problem Name: Way Too Long Words
Problem Link: https://codeforces.com/problemset/problem/71/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <string>

#define ln '\n'

using std::cin, std::cout, std::string, std::getline;

int main(){
    int n;
    cin >> n;

    string line;

    while (n >= 0){
        getline(cin, line);
        if (line.size() > 10){
            cout << line[0] << line.size()-2 << line[line.size()-1];
        }
        else {
            cout << line;
        }
        cout << ln;
        n--;
    }
}
