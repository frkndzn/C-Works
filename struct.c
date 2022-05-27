#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ogrencibilgileri
{
    char isim[20];
    int numara;
    int mid;
    int final;
    
}ogr[3];
int main()
{
    int secim,i,x,counter=0,y,j;
    float toplam=0.0,max=0.0;
for (i = 0; i < 3; i++)
{
    printf("%d.ogrenci adini giriniz", i+1);
    scanf("%s", ogr[i].isim);
    printf("%d.ogrenci numara giriniz",i+1);
    scanf("%d", &ogr[i].numara);
    printf("%d.ogrenci mid ve finalini giriniz",i+1);
    scanf("%d %d", &ogr[i].mid, &ogr[i].final);
}
printf("yapmak istediginiz islemi seciniz\n");
printf("1-)ogrencileri listele\n2-)numarayla ogrenci bul ve guncelle\n3-)sinif ortalamasini bul\n4-)en yuksek ortalamali ogrenciyi bul\n");
yrk:
scanf("%d", &secim);
switch (secim)
{
case 1:
for ( i = 0; i < 3; i++)
{
    printf("\n%d.kisi\nisim:%s\nnumara:%d\nmid:%d\nfinal:%d", i+1, ogr[i].isim,ogr[i].numara, ogr[i].mid, ogr[i].final );
}
goto yrk;
break;
case 2:
    printf("bulmak ve guncellemek istediginiz ogrencinin numarasini giriniz:");
    scanf("%d", &x);
    for ( i = 0; i < 3; i++)
    {
        if (x==ogr[i].numara)
        {
            printf("ogrencinin adi:%s", ogr[i].isim);
            printf("\nyeni no giriniz:");
            scanf("%d", &y);
            ogr[i].numara=y;
            printf("\n%s kisisinin yeni nosu:%d", ogr[i].isim, ogr[i].numara);
            counter++;
            break;
        }
    }
    if(counter==0) printf("ogrenci bulunamadi");
    goto yrk;
    break;
case 3:
    for ( i = 0; i < 3; i++)
    {
        toplam+=((ogr[i].mid*40)/100)+((ogr[i].final*60)/100);
    }
    printf("\nogrencilerin ortalamasi %0.2f dir",toplam/3); 
    
    goto yrk;
    break;
case 4:
    for(i=0;i<3;i++){
        if((((ogr[i].mid*40)/100)+((ogr[i].final*60)/100))>max){
        max=((ogr[i].mid*40)/100)+((ogr[i].final*60)/100);
        j=i;
        }
    }
    printf("name and avarage of best student: %s-%.2f\n",ogr[j].isim,max);
   goto yrk;
    break;

default:
    break;
}


    return 0;
}