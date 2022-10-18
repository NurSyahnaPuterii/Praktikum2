#include <stdio.h>
#include <math.h>

int main () 
{
    int alas, tinggi, keliling, luassegitiga, sisimiring, luas;

    printf ("Masukkan sisi tegak segitiga : ");
    scanf ("%d", &tinggi);

    printf ("Masukkan sisi miring segitiga : ");
    scanf ("%d", &sisimiring);

    printf ("\n");

    alas = sqrt (sisimiring * sisimiring - tinggi * tinggi);
    printf (" Alas = %d cm\n", alas );

    printf (" Tinggi = %d\n", tinggi);

    keliling = alas + tinggi + sisimiring;
    printf (" Keliling = %d cm\n",keliling);

    luas = alas * tinggi / 2;
    printf (" Luas = %d cm^2\n", luas);

    printf ("\n\n");

    main ();
}