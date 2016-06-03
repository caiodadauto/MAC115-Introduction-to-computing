#include <stdio.h>

int fat (int num) {
    int
        num_fat = 1;

    for ( ; num >= 1; --num) {
        num_fat *= num;
    }
    return num_fat;
}

int main () {
    int
        n;

    printf ("entra com n: ");
    scanf ("%d", &n);
    n = fat (n);
    
    printf ("fat eh %d\n\n", n);

    return 0;
}
