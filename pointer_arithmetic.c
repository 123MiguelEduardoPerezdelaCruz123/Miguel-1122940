#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = numbers;
    printf("Primer elemento: %d\n", *ptr);
    ptr++;
    printf("Segundo elemento: %d\n", *ptr);
    return 0;
}
