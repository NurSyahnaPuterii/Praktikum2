#include <stdio.h>
int main ()
{
    char nama [60], nim [60], kelas [60], ttl [60], alamat [60], hobi[60], nomor[60];

    printf ("Nama : ");
    gets(nama);
    printf ("NIM  : ");
    gets(nim);
    printf ("Kelas Paralel : ");
    gets(kelas);
    printf ("Tempat/Tanggal Lahir : ");
    gets(ttl);
    printf ("Alamat : ");
    gets(alamat);
    printf ("Hobby : ");
    gets(hobi);
    printf ("No.HP : ");
    gets(nomor);

    printf ("\n========================================================\n");
    printf ("Nama                 : %s\n", nama);
    printf ("NIM                  : %s\n", nim);
    printf ("Kelas Paralel        : %s\n", kelas);
    printf ("Tempat/tanggal Lahir : %s\n", ttl);
    printf ("Alamat               : %s\n", alamat);
    printf ("Hobby                : %s\n", hobi);
    printf ("No.HP                : %s\n", nomor);
    printf ("\n\n\n");
}