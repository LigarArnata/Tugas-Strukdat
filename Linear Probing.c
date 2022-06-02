/* Linear Probing
Ligar Arsa Arnata
5025211244 */

#include <stdio.h>
#include <stdlib.h>
#define size 13

int Tabel_Hash[size]={NULL};

void masuk_data(){

    int value, index, i, hash_key;

    printf("Masukkan Angka Pada Tabel Hash : \n");
    scanf("%d",&value);

    hash_key = value % size;

    for(i=0; i<size; i++){

        index = (hash_key+i) % size;
        if(Tabel_Hash[index] == NULL){

        Tabel_Hash[index] = value;
        break;
    }
}
    if(i == size){
        printf("Angka Tidak Bisa Dimasukkan Pada Tabel");
    }

}

void cari_data(){

    int value, index, i, hash_key;

    printf("Masukkan Angka yang Ingin Dicari : \n");
    scanf("%d",&value);

    hash_key = value % size;

    for(i=0; i<size; i++){

        index = (hash_key+i) % size;
        if(Tabel_Hash[index] == value){

            printf("Angka Ditemukan pada Index ke - %d\n",index);
            break;
   }
}
    if(i == size){
        printf("Angka Tidak Ditemukan \n");
    }
}

void tampil_data(){

    printf("Berikut Angka yang Ada Dalam Tabel \n");
    for(int i=0; i< size; i++)

        printf("\nPada Index ke - %d \t Angkanya = %d", i, Tabel_Hash[i]);

}


int main(){

    int pilih;
    while(1){

     printf("\n\t\t\t MENU\n\n 1. Masukkan Angka\n 2. Tampilkan Tabel \n 3. Cari Angka \n 4. Keluar \n Pilih : ");
     scanf("%d",&pilih);

     switch(pilih){

       case 1:
         masuk_data();
         break;

       case 2:
         tampil_data();
         break;

       case 3:
         cari_data();
         break;

       case 4:
           exit(0);
     }
   }
   return 0;
 }
