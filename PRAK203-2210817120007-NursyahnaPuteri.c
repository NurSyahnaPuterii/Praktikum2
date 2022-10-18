#include <stdio.h>
int main ()
{
    float a, b, i, j, x, y, hasil;

    printf ("masukan nilai pertama : ");
    scanf ("%f", &a);

    printf ("masukan nilai kedua : ");
    scanf ("%f", &b);

    printf ("masukan nilai ketiga : ");
    scanf ("%f", &i);

    printf ("masukan nilai keempat : ");
    scanf ("%f", &j);

    printf ("masukan nilai kelima : ");
    scanf ("%f", &x);

    printf ("masukan nilai keenam : ");
    scanf ("%f", &y);

    hasil = (a - b) * (i / j) - (x + y);
    
    printf ("\n");
    printf ("Hasil dari perhitungan tersebut adalah %.3f", hasil);
    printf ("\n\n\n");
    
    main ();
}