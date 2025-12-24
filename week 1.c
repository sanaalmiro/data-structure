// 1. Traversal
void traverse(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 2. Insertion
int insert(int arr[], int size, int capacity, int element, int index) {
    if (size >= capacity) {
        printf("Error: Array is full!\n");
        return size;
    }
    if (index < 0 || index > size) {
        printf("Error: Invalid index!\n");
        return size;
    }

    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
    return size + 1; 
}

// 3. Deletion
int delete(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Error: Invalid index!\n");
        return size;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1; 
}

