#include <stdio.h>

// Traversal: O(n)
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

// Insertion: O(n) due to shifting right
int insertElement(int arr[], int size, int element, int pos, int capacity) {
    if (size >= capacity) return size;
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    return size + 1;
}

// Deletion: O(n) due to shifting left
int deleteElement(int arr[], int size, int pos) {
    if (pos >= size) return size;
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int main() {
    int arr[10] = {1, 2, 4, 5};
    int size = 4;
    size = insertElement(arr, size, 3, 2, 10); // Insert 3 at index 2
    printf("After Insertion: "); printArray(arr, size);
    size = deleteElement(arr, size, 0);       // Delete index 0
    printf("After Deletion: "); printArray(arr, size);
    return 0;
}
