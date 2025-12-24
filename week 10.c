void createTree(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) { // -1 represents NULL
            printf("Node: %d ", arr[i]);
            if (2*i+1 < n) printf("Left: %d ", arr[2*i+1]);
            if (2*i+2 < n) printf("Right: %d ", arr[2*i+2]);
            printf("\n");
        }
    }
}
