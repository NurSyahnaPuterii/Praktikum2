#include <stdio.h>
int main () 
{

    float hasil, nilaipertama, nilaikedua;

    printf ("\n\n");
    printf("masukan nilai pertama \t: ");
    scanf("%f", &nilaipertama);
    printf("masukkan nilai kedua\t: ");
    scanf("%f", &nilaikedua);
    hasil = nilaipertama + nilaikedua;
    printf ("Hasil dari penjumlahan nilai pertama \"%1.2f\" dan nilai kedua \"%1.2f\" adalah \"%1.2f\" ", nilaipertama, nilaikedua, hasil);
    printf ("\n\n\n");
}