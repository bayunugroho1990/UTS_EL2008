#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 255

char filename[]="datapenduduk.txt";
int kode;

//----------------------------------->>baca & cari
void baca_cari(){
printf("void baca\n");
//----------------------------------->>baca
}

//----------------------------------->>tulis
void tulis(){
printf("void tulis\n");
}

//----------------------------------->>hapus
void hapus(){
printf("void hapus\n");
printf("hapus data?(ya=y/tidak=t): ");
    char hps;
    scanf("%s", &hps);
    if(hps=='y')
    {
        printf("data terhapus\n\n");
    }
    else
    {
        printf("data tidak terhapus. silakan ulang!!\n\n");
    }

}

int main(){

//----------------------------------->>membuka file
FILE* stream = fopen(filename, "r");
start:
printf("Selamat datang di database kependudukan\n");
printf("----------------------------\n");
printf("Pilihan yang akan dilakukan:\n");
printf("1. Pencarian data\n");
printf("2. Memasukkan data\n");
printf("3. Menghapus data\n");
printf("----------------------------\n");
printf("Masukkan kode pilihan : ");
scanf("%d", &kode);

if(kode==1){
    baca_cari();
}
else if(kode==2){
    tulis();
}
else if(kode==3)
{
    baca_cari();
    hapus();
}
else
{
    printf("kode salah. silahkan diulang!!\n\n");
    goto start;
}

return 0;
}
