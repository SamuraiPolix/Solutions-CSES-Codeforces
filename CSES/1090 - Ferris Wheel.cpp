/*
Problem Name: Ferris Wheel
Problem Link: https://cses.fi/problemset/task/1090
Author: Samuel Lazareanu (Github: SamuraiPolix)
*/
#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector;

void merge(vector<int>& arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1);
    vector<int> rightArr(n2);
        
    for (int i = 0; i < n1; i++){
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++){
        rightArr[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, ind = left;
    
    while (i < n1 && j < n2){
        if (leftArr[i] <= rightArr[j]){
            arr[ind++] = leftArr[i++];
        }
        else {
            arr[ind++] = rightArr[j++];
        }
    }
    
    while (i < n1){
        arr[ind++] = leftArr[i++];
    }
    
    while (j < n2){
        arr[ind++] = rightArr[j++];
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        
        merge(arr, left, mid, right);
    }
}

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> weights(n);

    for (int i = 0; i < n; ++i){
        cin >> weights[i];
    }

    mergeSort(weights, 0, n-1);

    int right = n-1, left = 0, count = 0;

    while (left < right){
        // either way we take the right one, if left fits that take it aswell
        if (weights[right] + weights[left] <= x){
            left++;
        }
        right--;
        count++;
    }
    if (left == right){
        count ++;
    }

    cout << count;

}
