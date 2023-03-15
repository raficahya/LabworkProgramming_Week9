#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;

void displayArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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
    n = 100000;
    int arr[n];

    randomizeArray(arr, n);
    displayArray(arr, n);

    sort(arr, arr+n);
    cout << "Sorted Array: " << endl;
    displayArray(arr, n);

    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in milliseconds: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " ms" << endl;

}


