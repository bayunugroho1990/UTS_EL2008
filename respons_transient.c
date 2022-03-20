#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float t;
float y;
float tunak;
float x;
float e=2.718;

int main(){
printf("Diketahui persamaan respons transient rangkaian RC sbb:\n");
printf("\n\t y(t)=(1-(1/exp(3591t)))*5u(t)\n\n");
printf("nilai 0.0001< t >0.0015\n");
printf("Untuk mengetahui kondisi tunak dan output y(t),\n");
start:
printf("masukkan input waktu (t)= ");
scanf("%f", &t);

x=3591*t;
y=5-(5/pow(e,x));
tunak=4.9;

if(y>=tunak && y<=5)
{
    printf("\nt=%f sekon telah masuk dalam kondisi tunak\n", t);
    printf("y(t)=%f volt\n", y);
    printf("program selesai\n");
}
else
{
    printf("\nt=%f sekon belum masuk dalam kondisi tunak\n", t);
    printf("kondisi tunak=%f volt\n", tunak);
    printf("y(t)=%f volt\n\n", y);
    goto start;
}
return 0;

}
