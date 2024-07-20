#include <stdio.h>

// Function to perform selection sort
void selectionSort(int array[], int size) {
    int i, j, min_idx, temp;
    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted array
        temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);
    
    // Printing original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // Sorting array using selection sort
    selectionSort(array, size);
    
    // Printing sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}