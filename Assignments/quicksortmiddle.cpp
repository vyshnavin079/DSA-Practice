#include <bits/stdc++.h>
using namespace std;

int partitionMiddle(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;
    int pivot = arr[mid];

    int i = low;
    int j = high;

    while (i <= j) {
        while (arr[i] < pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return i;
}

void quickSortMiddle(int arr[], int low, int high) {
    if (low < high) {
        int p = partitionMiddle(arr, low, high);
        quickSortMiddle(arr, low, p - 1);
        quickSortMiddle(arr, p);
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSortMiddle(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
