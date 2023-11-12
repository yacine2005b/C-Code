//couldn't solve this goofy ahh prblm in school today
#include <stdio.h>
void maxAndSecond(int t[], int size) {
    int max1 = t[0];

    for (int i = 1; i < size; i++) {
        if (max1 < t[i]) {
            max1 = t[i];
        }
    }

    int max2 = t[0];

    for (int i = 1; i < size; i++) {
        if (max2 < t[i] && t[i] != max1) {
            max2 = t[i];
        }
    }

    printf("the biggest element is: %d, and the second element is: %d\n", max1, max2);
}
int main() {
    int size;
    printf("the size of the array: ");
    scanf("%d", &size);
    int t[size];
    printf("the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &t[i]);
    }
    maxAndSecond(t, size);
    return 0;
}


