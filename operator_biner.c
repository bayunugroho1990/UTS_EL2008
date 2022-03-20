#include<stdio.h>
#include<stdlib.h>
#define MAX_LEN 8

int A[MAX_LEN], biner_1[MAX_LEN], biner_2[MAX_LEN], biner_3[16];

int main(){

printf("Masukkan nilai biner A (8bits)=\n");
for(int i=0;i<MAX_LEN;i++){
printf("Bit ke %d : ", i+1);
scanf("%d", &A[i]);
}

printf("\n\nOperasi 1:\n");
printf("----------------------\n");
int x1[8]={1,0,1,0,0,1,0,1};
int y1[8]={1,1,1,0,1,1,1,1};
printf("Hasil binary =\n");
for(int i=0;i<MAX_LEN;i++){
biner_1[i]=(A[i]&y1[i])^x1[i];
printf("%d", biner_1[i]);
}


printf("\n\nOperasi 2:\n");
printf("----------------------\n");
int x2[8]={1,1,0,1,1,0,1,1};
int y2[8]={1,1,1,1,0,0,1,1};
printf("Hasil binary = ");
for(int i=0;i<MAX_LEN;i++){
biner_2[i]=(~(y2[i]>>4)&&x2[i])+A[i];
printf("%d", biner_2[i]);
}

printf("\n\nOperasi 3: ");
printf("----------------------\n");
int x3[8]={0,0,1,0,1,1,1,1};
int y3[8]={1,0,1,0,0,1,0,1};
printf("Hasil binary = ");
for(int i=0;i<16;i++){
biner_3[i]=((x3[i]>>2)|y3[i])*A[i];
printf("%d", biner_3[i]);
}
printf("\n\n");
return 0;
}
