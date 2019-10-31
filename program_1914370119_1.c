#include <stdio.h>
int main()
{
    char nama[20],NPM[15];
    int uts,uas,nilai,tugas,akhir;

    printf("\t Menghitung Nilai Mahasiwa\n");
    printf("NPM          = ");
    scanf("%s",& NPM);
    printf("nama         =  ");
    scanf("%s",& nama);
    printf("nilai uts    =  ");
    scanf("%d",& uts);
    printf("nilai uas    =  ");
    scanf("%d",& uas);
    akhir = (0.4*uts) +(0.6*uas);
    printf("nilai akhir  =  %d\n",akhir);
    printf ("Status Kelulusan :  ");

    if(uts >= 70)
    {
    printf("LULUS");
    }
    else{
    if (akhir >=60) printf("LULUS");
    else printf("TIDAK LULUS");
}
   return 0;
}
