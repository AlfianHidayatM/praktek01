#include <stdio.h >
#include <conio.h >
#include <stdlib.h >
main ()
{
struct
{
char nim[11];
char nama[15];
float teori, praktek;
float akhir_teori, akhir_praktek, total;
} mahasiswa;/* Kode hapus screen*/
system ("cls");

/* Input Data*/
printf("\n----------------Perhitungan Nilai Mahasiswa----------------\n\n");printf("\n Masukkan NIM = "); scanf("%s",&mahasiswa.nim);
printf(" Masukkan Nama = "); scanf("%s",&mahasiswa.nama);
printf(" Masukkan Nilai Teori = "); scanf("%f",&mahasiswa.teori);
printf(" Masukkan Nilai Praktek = "); scanf("%f",&mahasiswa.praktek);
mahasiswa.akhir_teori = mahasiswa.teori * 40 /100;
mahasiswa.akhir_praktek = mahasiswa.praktek * 60 /100;
mahasiswa.total = mahasiswa.akhir_teori + mahasiswa.akhir_praktek;

system ("cls");
/* Output Data */
printf("\n----------------Perhitungan Nilai Mahasiswa----------------\n\n");
printf("\n NIM = %s\n",mahasiswa.nim);
printf(" Nama = %s\n",mahasiswa.nama);
printf(" Nilai Teori = %2.1f\n",mahasiswa.teori);
printf(" Nilai Praktek = %2.1f\n",mahasiswa.praktek);
printf(" Nilai Akhir Teori = %2.1f\n",mahasiswa.akhir_teori);
printf(" Nilai Akhir Praktek = %2.1f\n",mahasiswa.akhir_praktek);
printf(" Total Nilai = %2.1f\n",mahasiswa.total);getch();
}
