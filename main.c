//
//  main.c
//  fd
//
//  Created by FURKAN DÜZEN on 21.01.2022.
//

#include <stdio.h>




int main()
{
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    int  f;
    int d;
    int i;
    int x;
    int y;
    int z=0;
    
    
    for (i=100; i<1000; i++)
    {
        d=i;
        f=d%10;
        d=d/10;
        x=d%10;
        d=d/10;
        y=d%10;
        if (f!=x && f!=y && x!=y)
        {
            printf("%d\n", i);
            z=z+i;
        }
        
    }
    printf("TOPLAM: %d\n", z);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    int f;
    int d;
    int i;
    int x=0;
    printf("İstediğiniz Üçgen Satırı:");
    scanf("%d", &f);
    
    for (i=1; i<=f; i++)
    {
        for (d=1; d<=i; d++)
        {
            x++;
            if (x%2==0)
            {
                printf( " 0 ");
            }
            else
            {
                printf(" 1 ");
            }
            
        }
        printf("\n");
    }
    
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    int f;
    printf("İstediğiniz Üçgen Kaç Satırlık Olacak: ");
    scanf("%d",&f);
    int d;
    int x=0;
    int y;
    y=1;
    for (y=1;y<=f;y++)
    {
        for (d=1; d<=y; d++)
        {
            x++;
            printf(" %d ", x );
        }
        printf("\n");
    }*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*int dizi[5];
    int f;
    int i;
    int d;
    
    printf("sayi giriniz:");
    scanf("%d", &f);
    
    while (f>0)
    {
        for (i=0; i<5; i++)
        {
            d=f%10;
            dizi[i]=d;
            f=f/10;
            
        }
    }

    for (i=4; i>=0; i--)
    {
        printf("%d\n", dizi[i]);
    }
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*int i;
    for (i=1; i<101; i++)
    {
        if (i%5==0)
        {
            printf("%d\n", i);
        }
    }*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*int el;
    int bavul;
    printf("***** BAGAJ HAKKI TUTARI *****\n");
    printf("El Bagajı Ağırlığınızı Giriniz:");
    scanf("%d", &el);
    printf("Bavul Ağırlığınızı Giriniz:");
    scanf("%d", &bavul);
    if (el>8)
    {
        el = el-8;
    }
    else
    {
        el=0;
    }
    if (bavul>15)
    {
        bavul= bavul-15;
    }
    else
    {
        bavul=0;
    }
    el = (el+bavul)*4;
    printf("Bagaj Tutarınız:%d₺\n", el);*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*char isim[10], soyisim[10], yaş[2], şehir[15];
    printf("isim giriniz");
    scanf("%s", isim);
    printf("soyisim giriniz");
    scanf("%s", soyisim);
    printf("yaş girin:");
    scanf("%s", yaş);
    printf("şehir giriniz");
    scanf("%s", şehir);
    printf("%s\n %s\n %s\n %s\n", isim, soyisim, yaş, şehir);*/
    
    


    //char isim[20];
    //printf("Isim Soyisim Giriniz:");
    //scanf("%s\n",isim);
    //printf("%s\n" , isim);
    
    
    
    
    //char ad[15] = "FURKAN DÜZEN";
    //printf("%s\n", ad);
    
    
    
    
    

    return 0;
}
