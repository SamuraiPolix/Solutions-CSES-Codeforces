/*
Problem Name: A. Tieni aggiornato il catalogo
Problem Link: https://codeforces.com/gym/420506/problem/A
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <set>
#define ln '\n'
#define ll long long

using std::cin, std::cout, std::multiset;

int main(){
    int tt;
    cin >> tt;
    multiset<ll> set;
    while (tt--){
        char c;
        ll x;
        cin >> c >> x;

        switch(c){
            case 'a': set.insert(x); break;
            case 'c': cout << set.count(x) << ln; break;
            case 't': if (set.find(x) != set.end()) set.erase(set.find(x)); break;
            default: break;
        }
    }
}
