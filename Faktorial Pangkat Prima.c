// Tugas Function

#include<stdio.h>
#include <stdlib.h>

// Fungsi Hitung Faktorial
int hitungFaktorial(int n){

    int faktorial=1;

    for(int x=1; x<=n; x++){
      faktorial=faktorial*x;
    }

     return faktorial;
}

// Fungsi Hitung Pangkat
int hitungPangkat(int x,int n)
{
    int number = 1;

    for (int i = 0; i < n; ++i){
    number = number * x;
    }

    return(number);
}

// Fungsi Check Angka Prima
int cekPrima(int n)
{
    int count = 0;
    for(int i=2; i<=n/2; i++){

     if(n%i == 0)
     {
       count=1;
       break;
     }
  }
  if(n == 1) count = 1;
  else if(n<=0) count = 1;
}

int main(){

// Soal Faktorial

    int x,angka;

    printf("\t\t Faktorial\n\n");
    printf("Masukkan Angka : ");
    scanf("%d",&angka);

    int hasil = hitungFaktorial(angka);

    printf("Hasil Faktorial dari Angka %d adalah %d ",angka,hasil);



// Soal Pangkat

    int nomor, pangkat;

    printf("\n\n\t\t Pangkat\n\n");

    printf  ("Masukkan Bilangan Pokok : ");
    scanf ("%d", &nomor);

    printf  ("Masukkan Bilangan Pangkat : ");
    scanf ("%i", &pangkat);

    int answer = hitungPangkat(nomor, pangkat);

    printf("Hasil dari %d pangkat %d adalah %d",nomor, pangkat, answer);


// Soal Prima

    int angka1, angka2, count;

    printf("\n\n\t\t Prima\n\n");

    printf("Masukkan Angka Pertama : ");
    scanf("%d", &angka1);
    printf("Masukkan Angka Kedua : ");
    scanf("%d", &angka2);

    if (angka1 > angka2) {
        angka1 = angka1 + angka2;
        angka2 = angka1 - angka2;
        angka1 = angka1 - angka2;
    }

    printf("Angka Prima antara %d and %d adalah: ", angka1, angka2);

    for (int i = angka1 + 1; i < angka2; ++i){
        count = cekPrima(i);
        if (count == 0){
      printf("%d ", i);
    }
  }

  return 0;
}
