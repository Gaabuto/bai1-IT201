#include <stdio.h>
/**
 * description Hàm đếm số lần xuất hiện
 * @return
 */
int main() {
    int number, count = 0;
    int n;
    printf("Enter number in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please enter a number to check: ");
    scanf("%d",&number);

    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    printf("%d repeat %d times" ,number,count);//O(n),O(1)
    return 0;
}