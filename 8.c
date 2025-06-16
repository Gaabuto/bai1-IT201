#include <stdio.h>
int main() {
    int count[100] = {0}, n, counts = 0, elements = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count[arr[j]]++;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        if (count[i] > counts) {
            counts = count[i];
            elements = i;
        }
    }
    printf("Elements has the highest rate is: %d", elements);




    return 0;
}