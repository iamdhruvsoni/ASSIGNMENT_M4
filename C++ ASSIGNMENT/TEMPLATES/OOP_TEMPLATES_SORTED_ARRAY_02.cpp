//sorting the array in ascending order using template.

#include <iostream>
using namespace std;

template <class T> void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = size - 1; i < j; j--)
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
}

int main() {
    int arr[5] = { 70, 50, 80, 40, 20 };
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort<int>(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

