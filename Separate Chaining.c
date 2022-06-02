/* Separate Chaining
Ligar Arsa Arnata
5025211244 */

#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#define size 10

struct node{
    int data;
    struct node *next;
};

struct node *head[size]={NULL},*c;

void masuk_data(){

    int i, value;

    printf("Masukkan Angka Pada Tabel Hash : \n");
    scanf("%d",&value);

    i = value % size;

    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(head[i] == NULL)
        head[i] = newnode;
    else{
        c=head[i];

        while(c->next != NULL){

            c=c->next;
        }

        c->next=newnode;
    }
}

void cari_data(){

    int value, index;

    printf("Masukkan Angka yang Ingin Dicari : \n");
    scanf("%d",&value);

    index = value % size;

    if(head[index] == NULL)
        printf("Angka Tidak Ditemukan \n");

    else{
        for(c=head[index]; c!=NULL; c=c->next){
            if(c->data == value){
                printf("Angka Ditemukan pada Index ke - %d\n",index);
                break;
                }
            }

        if(c == NULL)
            printf("Angka Tidak Ditemukan \n");

    }
}

void tampil_data(){

    int i;
    for(i=0; i<size; i++){

        printf("\nPada Index ke - %d \t Angkanya = ",i);
        if(head[i] == NULL){
            printf("0");
       }else{
            for(c=head[i];c!=NULL;c=c->next)
                printf("%d",c->data);
        }
  }
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

