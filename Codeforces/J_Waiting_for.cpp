/*
Problem Name: Waiting for...
Problem Link: https://codeforces.com/problemset/problem/2038/J
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>

#define ln '\n'

using std::cin, std::cout;

int main(){
    int events;
    cin >> events;
    
    int peopleAtStation = 0;        // without Monocarp

    for (int event = 0; event < events; event++){
        char eventType;
        cin >> eventType;

        if (eventType == 'P'){
            int peopleArrived;
            cin >> peopleArrived;
            peopleAtStation += peopleArrived;
        }
        else {  // B
            int availableSeats;
            cin >> availableSeats;
            if (availableSeats >= peopleAtStation){
                availableSeats -= peopleAtStation;
                peopleAtStation = 0;
                if (availableSeats >= 1){
                    cout << "YES";
                }
                else {
                    cout << "NO";
                }
            }
            else {
                peopleAtStation -= availableSeats;
                cout << "NO";
            }
            cout << ln;
        }
    }
}
