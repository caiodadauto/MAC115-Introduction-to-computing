#include<stdio.h>

int main () {

    int
        hip = 0,
        cat_1,
        cat_2,
        n;

    printf ("entre com um inteiro (n) diferente de 0: ");
    scanf ("%d", &n);

    printf ("\n\n Hipotenusa      Cateto        Cateto\n");

    for (hip = 1; hip <= n; ++ hip) {

        for (cat_1 = 1; cat_1 < hip; ++ cat_1) {
            cat_2 = cat_1;

            for (; cat_2 < hip; ++ cat_2){

                if ((cat_1 * cat_1) + (cat_2 * cat_2) == (hip * hip)) {
                    printf ("     %d               %d            %d\n", hip, cat_1, cat_2);
                }
            }
        }
    }         

    return 0;
} 
