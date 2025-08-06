#include <stdio.h>

int main() {
    char A[1000];
    int count = 0;
    fgets(A, sizeof(A), stdin);
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'A' || A[i] == 'a') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}