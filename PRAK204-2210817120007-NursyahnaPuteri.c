#include <stdio.h>
int main ()
{
    float jarijari, tinggi, volume, luas, keliling;
    const float phi = 3.14285714;

    printf ("Masukkan nilai jari-jari bejana : ");
    scanf ("%f", &jarijari);

    printf ("Masukkan nilai tinggi bejana : ");
    scanf ("%f", &tinggi);

    printf ("\n\n");

    volume = phi * jarijari * jarijari * tinggi;
    luas = 2 * phi * jarijari * (jarijari + tinggi);
    keliling = 2 * phi * jarijari ;
    
    printf (" Volume =  %.2f\n", volume);
    printf (" Luas =  %.2f\n", luas);
    printf (" keliling =  %.2f\n", keliling );
    printf ("\n\n");
   
}