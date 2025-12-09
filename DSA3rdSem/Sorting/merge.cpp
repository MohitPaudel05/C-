#include <iostream>
using namespace std;

// ============ MERGE FUNCTION ============
void merge(int arr[], int left, int mid, int right) {
    // Step 1: Create temp arrays to hold left and right halves
    int size1 = mid - left + 1;      // Size of left part
    int size2 = right - mid;          // Size of right part
    
    int leftArray[size1];
    int rightArray[size2];
    
    // Step 2: Copy elements from arr into temp arrays
    for (int i = 0; i < size1; i++) {
        leftArray[i] = arr[left + i];
    }
    
    for (int j = 0; j < size2; j++) {
        rightArray[j] = arr[mid + 1 + j];
    }
    
    // Step 3: Reset pointers for merging
    int i = 0;     // Pointer for leftArray
    int j = 0;     // Pointer for rightArray
    int k = left;  // Pointer for original array
    
    // Step 4: Compare and merge elements
    while (i < size1 && j < size2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k++] = leftArray[i++];
        } else {
            arr[k++] = rightArray[j++];
        }
    }
    
    // Step 5: Copy remaining elements from leftArray
    while (i < size1) {
        arr[k++] = leftArray[i++];
    }
    
    // Step 6: Copy remaining elements from rightArray
    while (j < size2) {
        arr[k++] = rightArray[j++];
    }
}

// ============ MERGE SORT FUNCTION ============
void mergeSort(int arr[], int left, int right) {
    if (left >= right)
        return;  // Base case: single element
    
    int mid = left + (right - left) / 2;  // Find middle
    
    mergeSort(arr, left, mid);            // Sort left half
    mergeSort(arr, mid + 1, right);       // Sort right half
    
    merge(arr, left, mid, right);         // Merge both halves
}

// ============ DISPLAY FUNCTION ============
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
    display(arr, size);
    
    mergeSort(arr, 0, size - 1);
    
    cout << "Sorted Array: ";
    display(arr, size);
    
    return 0;
}