/*
Problem Name: Apartments
Problem Link: https://cses.fi/problemset/task/1084
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
    int n, m, offset;
    cin >> n >> m >> offset;

    vector<int> apartments(m);
    vector<int> customers(n);
    
    int temp;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        customers[i] = temp;
    }

    for (int i = 0; i < m; ++i){
        cin >> temp;
        apartments[i] = temp;
    }

    mergeSort(customers, 0, n-1);
    mergeSort(apartments, 0, m-1);

    int happyCustomers = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (apartments[j] < customers[i] - offset) {
            j++; // Apartment too small
        } else if (apartments[j] > customers[i] + offset) {
            i++; // Apartment too large
        } else {
            happyCustomers++;
            i++;
            j++;
        }
    }

    
    cout << happyCustomers;

}
