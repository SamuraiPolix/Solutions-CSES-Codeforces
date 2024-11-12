/*
Problem Name: Repetitions
Problem Link: https://cses.fi/problemset/task/1069
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <string>

using std::cin, std::cout;

int main(){
    char c, prevC = 0;
    int count = 0, max = 0;
    while ((c = cin.get()) != EOF && c != '\n'){
        if (c != prevC){        // doesnt matter if we enter on the first iteration
            if (count > max){
                max = count;
            }
            count = 0;
        }
        count++;
        prevC = c;
    }
    // In case last substring is the longest
    if (count > max){
        max = count;
    }
    cout << max;
}
