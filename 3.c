
int* mallocArray(int n) {
    int * arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;//O(n),O(1)
    }
    return arr;
}
