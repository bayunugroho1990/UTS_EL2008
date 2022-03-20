#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100

int i = 0;
float massa[MAX_LEN];
float kecepatan[MAX_LEN];
char tegangan[MAX_LEN];
char filename[]="tegangan.txt";
char names[MAX_LEN][MAX_LEN];
char line[MAX_LEN];
char* token;

int main()
{

//----------------------------------------->>membuka file eksternal
FILE* stream = fopen(filename, "r");

while(fgets(line, MAX_LEN, stream))
    {
    token = strtok(line, ",");
    strcpy(names[i], token);

    token = strtok(NULL, ",");
    massa[i]= atof(token);

    token = strtok(NULL, "\n");
    kecepatan[i]= atof(token);

    ++i;
    }
//----------------------------------------->>

//----------------------------------------->>pencarian
int found = 0;
int j = 0;
printf("\nNilai tegangan antara 0 s/d 5 (Volt) dengan kelipatan 0.5: ");
printf("\nMasukkan nilai tegangan (Volt): ");
scanf("%s", &tegangan);
while (j < i && !found)
    {
    if (!strcmp(tegangan, names[j]))
        {
            found = 1;
        }
        else
            ++j;
    }

if (found){
    printf("------------------------------------------\n");
    printf("ketika diberi tegangan\t = %sx10^6 Volt\n", tegangan);
    printf("elektron memiliki massa\t = %fx10^-31 Kg\n", massa[j]);
    printf("dengan kecepatan relatif = %fx10^8 m/s\n", kecepatan[j]);
    printf("------------------------------------------\n");
}
else
    printf("%s tidak ada. masukkan kembali nilai!!\n", tegangan);

fclose(stream);
return 0;

}
