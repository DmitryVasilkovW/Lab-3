#include <stdio.h>

void  swap(int *a, int *b) {
    int key = *a;
    *a = *b;
    *b = key;
}

void antiQuicksort(int *mass, int size, int right) {
    int pivot;

    while (right <= size) {
        pivot = right / 2;

        swap (&mass[pivot], &mass[right]);

        right++;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int array[n - 1];

    int a[0];

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    antiQuicksort(array, n - 1, 2);

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
