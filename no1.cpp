//
// Created by ASUS on 11/13/2022.
//

#include "no1.h"

#include <iostream>
using namespace std;

void insertArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void medianArray(int arr[], int n){
    float median;
    if (n%2 == 0){
        median = (arr[((n/2)-1)] + arr[(n/2)])/2;
    } else {
        median = arr[(n/2)];
    }

    cout << median << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    insertArray(arr, n);
    sortArray(arr, n);
    medianArray(arr, n);

    return 0;
}
