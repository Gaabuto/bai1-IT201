#include <stdio.h>
int main() {
    int number, duplicate[100] = [0], count = 0, countArray = 0;
    int n;
    printf("Enter number in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        while (arr[i]> 1000 || arr[i] < 0) {
            printf("Enter again number %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
    int array[100] = {0};
    for (int i = 0; i < n; i++) {
        int times = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == array[j]) {
                times++;
            }
        }
        if (times == 0) {
            array[countArray] = arr[i];
        }else {
            count++;
            duplicate[count] = arr[i];
        }
    }
    printf("The duplicate numbers are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", duplicate[i]);
    }

    return 0;
}


int main() {
    int number, duplicate[100] = {0}, count = 0;
    int n;
    printf("Enter number in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        while (arr[i]> 1000 || arr[i] < 0) {
            printf("Enter again number %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        for (let j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                duplicate[count] = arr[i];
                count++;
            }
        }
    }
    printf("The duplicate numbers are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", duplicate[i]);//O(n2),O(n)
    }
    return 0;
}