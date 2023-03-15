//
// Created by ASUS on 11/13/2022.
//

#include "no2.h"

#include <iostream>
#include <chrono>
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

void insertionSortAscending (int arr[], int n){
    for (int j=1; j<n; j++){
        int i = j-1;
        int temp = arr[j];
        while(arr[i] > temp && i >= 0){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = temp;
    }
}

void insertionSortDescending (int arr[], int n){
    for (int j=1; j<n; j++){
        int i = j-1;
        int temp = arr[j];
        while(arr[i] < temp && i >= 0){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = temp;
    }
}

void selectionSortAscending(int arr[], int n){
    for (int i=0; i<n; i++){
        int min = i;
        for (int j=1+i; j<n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void selectionSortDescending(int arr[], int n){
    for (int i=0; i<n; i++){
        int min = i;
        for (int j=1+i; j<n; j++){
            if (arr[j] > arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void randomizeArray(int arr[], int n){
    for (int i=0; i<n; i++){
        arr[i] = rand()%100;
    }
}

int main() {
    auto start = chrono::steady_clock::now();
    int n;
    cout << "Insert the size of the array!";
    n = 100;
    int arr[n];

    randomizeArray(arr, n);
    displayArray(arr, n);

    cout << endl << "What kind of method do u want to use to sort the array??" << endl << "a. Insertion Sort (Ascending)" << endl << "b. Insertion Sort (Descending)" << endl << "c. Selection Sort (Ascending)" << endl << "d. Selection Sort (Descending)" << endl;
    char x;
    x = 'd';
    switch (x) {
        case 'a':
            insertionSortAscending(arr,n);
            break;
        case 'b':
            insertionSortDescending(arr,n);
            break;
        case 'c':
            selectionSortAscending(arr,n);
            break;
        case 'd':
            selectionSortDescending(arr,n);
            break;
    }

    displayArray(arr, n);

    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in milliseconds: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " ms" << endl;

}