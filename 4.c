#include <stdio.h>
int main() {
    int n, sum;
    for (int i = 0; i < n; i++) {
        sum += i; //O(n),O(1)
    }
    return 0;
}


int main() {
    int n,i = 0, sum;
    while (i<= n) {
        sum += i; // O(n),O(1)
    }
    return 0;
}