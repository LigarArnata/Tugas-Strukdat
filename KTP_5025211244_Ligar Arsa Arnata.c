#include <stdio.h>
#include <stdlib.h>

void input_data();
void tambah_data();
void cari_data();
void tampil_data();
void hapus_data();

int jumlah_data = 0;

struct input_data{
    char nama[100];
    char ttl[20];
    char jenis_kelamin[20];
    char gol[2];
    char alamat[20];
    char rt[20];
    char rw[20];
    char kelurahan[20];
    char kecamatan[20];
    char agama[20];
    char status[20];
    char pekerjaan[20];
    char kewarganegaraan[20];
    char berlaku[20];
    char nik[20];
}input[99];

int main()
{
    int pilih;
    do{
        printf("\t\t MENU \t\t\n");
        printf("1. Input Data\n");
        printf("2. Tambah Data\n");
        printf("3. Cari Data\n");
        printf("4. Tampilkan Data\n");
        printf("5. Hapus Data\n");
        printf("6. Keluar\n");
        printf("Pilih : ");
        scanf("%d", &pilih);

        switch(pilih)
        {
        case 1 :
            input_data();
            break;

        case 2 :
            tambah_data();
            break;

        case 3 :
            cari_data();
            break;

        case 4 :
            tampil_data();
            break;

        case 5 :
            hapus_data();
            break;

        case 6 :
            printf("Terima Kasih");
            return 0;

        default :
            printf("Pilihan yang Anda Masukkan Salah");
            break;
        }
    }while(pilih != 6);
    return 0;
}

void input_data(){
    char temp;

    printf("Input Berapa Data : ");
    scanf("%d", &jumlah_data);
    struct input_data;

    for(int i=0; i<=jumlah_data;i++){
        scanf("%c", &temp);
        printf("Data ke - %d \n", i+1);
        printf("Nama : ");
        gets(input[i].nama);
        printf("TTL : ");
        gets(input[i].ttl);
        printf("Jenis Kelamin : ");
        gets(input[i].jenis_kelamin);
        printf("Golongan Darah : ");
        gets(input[i].gol);
        printf("Alamat : ");
        gets(input[i].alamat);
        printf("RT : ");
        gets(input[i].rt);
        printf("RW : ");
        gets(input[i].rw);
        printf("Kelurahan : ");
        gets(input[i].kelurahan);
        printf("Kecamatan : ");
        gets(input[i].kecamatan);
        printf("Agama : ");
        gets(input[i].agama);
        printf("Status Perkawinan : ");
        gets(input[i].status);
        printf("Pekerjaan : ");
        gets(input[i].status);
        printf("Kewarganegaraan : ");
        gets(input[i].kewarganegaraan);
        printf("Berlaku Hingga : ");
        gets(input[i].berlaku);
        printf("NIK : ");
        gets(input[i].nik);
        scanf("%c", &temp);
    }
}

void tambah_data(){

    char temp;
    printf("\t\tTambah Data\n");
    jumlah_data++;

        scanf("%c",&temp);
        printf("Nama : ");
        gets(input[jumlah_data-1].nama);
        printf("TTL : ");
        gets(input[jumlah_data-1].ttl);
        printf("Jenis Kelamin : ");
        gets(input[jumlah_data-1].jenis_kelamin);
        printf("Golongan Darah : ");
        gets(input[jumlah_data-1].gol);
        printf("Alamat : ");
        gets(input[jumlah_data-1].alamat);
        printf("RT : ");
        gets(input[jumlah_data-1].rt);
        printf("RW : ");
        gets(input[jumlah_data-1].rw);
        printf("Kelurahan : ");
        gets(input[jumlah_data-1].kelurahan);
        printf("Kecamatan : ");
        gets(input[jumlah_data-1].kecamatan);
        printf("Agama : ");
        gets(input[jumlah_data-1].agama);
        printf("Status Perkawinan : ");
        gets(input[jumlah_data-1].status);
        printf("Pekerjaan : ");
        gets(input[jumlah_data-1].pekerjaan);
        printf("Kewarganegaraan : ");
        gets(input[jumlah_data-1].kewarganegaraan);
        printf("Berlaku Hingga : ");
        gets(input[jumlah_data-1].berlaku);
        printf("NIK : ");
        gets(input[jumlah_data-1].nik);
        scanf("%c", &temp);
        printf("Penambahan Data Berhasil\n");

}

void cari_data(){
    char cari, temp;

    printf("\t Cari Data\n");
    scanf("%c", &temp);
    printf("Masukkan NIK : ");
    scanf("%c", &cari);

    int check = 0;

    for (int i=0;i<jumlah_data;i++){
        scanf("%c", &temp);

        if(cari == input[i].nik)
        cari ++;
        printf("Data Ke - %d", i+1);
        printf("Nama : \n", input[i].nama);
        printf("TTL : \n", input[i].ttl);
        printf("Jenis Kelamin : \n", input[i].jenis_kelamin);
        printf("Golongan Darah : \n", input[i].gol);
        printf("Alamat : \n", input[i].alamat);
        printf("RT : \n", input[i].rt);
        printf("RW : \n", input[i].rw);
        printf("Kelurahan : \n", input[i].kelurahan);
        printf("Kecamatan : \n", input[i].kecamatan);
        printf("Agama : \n", input[i].agama);
        printf("Status Perkawinan : \n", input[i].status);
        printf("Pekerjaan : \n", input[i].pekerjaan);
        printf("Kewarganegaraan : \n", input[i].kewarganegaraan);
        printf("Berlaku Hingga : \n", input[i].berlaku);

  }
  if(cari == 0){
    printf("Data Tidak Ditemukan");
  }
}

void tampil_data(){
    char temp;
    printf("\t Tampilkan Data\n");
    for(int i=0;i<jumlah_data;i++){
        printf("Nama : \n", input[i].nama);
        printf("TTL : \n", input[i].ttl);
        printf("Jenis Kelamin : \n", input[i].jenis_kelamin);
        printf("Golongan Darah : \n", input[i].gol);
        printf("Alamat : \n", input[i].alamat);
        printf("RT : \n", input[i].rt);
        printf("RW : \n", input[i].rw);
        printf("Kelurahan : \n", input[i].kelurahan);
        printf("Kecamatan : \n", input[i].kecamatan);
        printf("Agama : \n", input[i].agama);
        printf("Status Perkawinan : \n", input[i].status);
        printf("Pekerjaan : \n", input[i].pekerjaan);
        printf("Kewarganegaraan : \n", input[i].kewarganegaraan);
        printf("Berlaku Hingga : \n", input[i].berlaku);

    }
}

void hapus_data(){
    printf("\t Hapus Data\n");
    int hapus = 0;
    printf("Hapus Data Ke : ");
    scanf("%d", &hapus);
    int check = hapus - 1;
    int kondisi = 1;

    if(hapus>jumlah_data){
        printf("Data Ke - %d Tidak Ada", hapus);
    }else if((check>0)||(jumlah_data - 1>0)){
             for(int i=hapus-1;i<jumlah_data - 1;i++){
                strcpy(input[i+1].nama, input[i].nama);
                strcpy(input[i+1].ttl, input[i].ttl);
                strcpy(input[i+1].jenis_kelamin, input[i].jenis_kelamin);
                strcpy(input[i+1].gol, input[i].gol);
                strcpy(input[i+1].alamat, input[i].alamat);
                strcpy(input[i+1].rt, input[i].rt);
                strcpy(input[i+1].rw, input[i].rw);
                strcpy(input[i+1].kelurahan, input[i].kelurahan);
                strcpy(input[i+1].kecamatan, input[i].kecamatan);
                strcpy(input[i+1].agama, input[i].agama);
                strcpy(input[i+1].status, input[i].status);
                strcpy(input[i+1].pekerjaan, input[i].pekerjaan);
                strcpy(input[i+1].kewarganegaraan, input[i].kewarganegaraan);
                strcpy(input[i+1].berlaku, input[i].berlaku);
             }
        }else{
            for (int i = hapus; i <= jumlah_data-1; i++){

                strcpy(input[i+1].nama, input[i].nama);
                strcpy(input[i+1].ttl, input[i].ttl);
                strcpy(input[i+1].jenis_kelamin, input[i].jenis_kelamin);
                strcpy(input[i+1].gol, input[i].gol);
                strcpy(input[i+1].alamat, input[i].alamat);
                strcpy(input[i+1].rt, input[i].rt);
                strcpy(input[i+1].rw, input[i].rw);
                strcpy(input[i+1].kelurahan, input[i].kelurahan);
                strcpy(input[i+1].kecamatan, input[i].kecamatan);
                strcpy(input[i+1].agama, input[i].agama);
                strcpy(input[i+1].status, input[i].status);
                strcpy(input[i+1].pekerjaan, input[i].pekerjaan);
                strcpy(input[i+1].kewarganegaraan, input[i].kewarganegaraan);
                strcpy(input[i+1].berlaku, input[i].berlaku);
            }
        }if(kondisi){
            jumlah_data = jumlah_data-1;
            printf("Data Berhasil Dihapus");
        }
}
