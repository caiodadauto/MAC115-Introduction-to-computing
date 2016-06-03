#include<stdio.h>

int main () {

    int
        n;
    float
        H = 0;
    
    printf ("entre com o valor de n: ");
    scanf ("%d", &n);
    
    for ( ; n > 0; --n) {
        H += (float) 1/n;
    }
    
    printf ("o numero harmonico e %f\n", H);
    return 0;
}
