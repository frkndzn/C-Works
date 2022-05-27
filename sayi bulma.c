#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f=0;
int d=0;

void sırala(int *,int *);

int main()
{
    int *tek;
    int *cift;
    int numara,a;
    


    tek = (int *)calloc(1,sizeof(int));
    cift = (int *)calloc(1,sizeof(int));

    printf("tek ve cift sayıları listelemek için ogrenci numaranızı giriniz\n");
    scanf("%d", &numara);
    
    for (int i = 0; i < 10; ++i)
    {
        a=numara%10;
        if (a%2==0)
        {
        *(cift+f)=a;
        f++;
        cift = (int *)realloc(cift,sizeof(int)*(f+1));
        }
        else
        {
        *(tek+d)=a;
        d++;
        tek = (int *)realloc(tek,sizeof(int)*(d+1));
        }
        numara/=10;
    }
    sırala(tek,cift);

    return 0;
}



    void sırala(int *tek,int *cift)
{
        printf("tek sayılar: ");
        for (int i = 0;i < d; i++)
        {
        printf("%d ", *(tek+i));
        }
        printf("\n");
        printf("cift sayilar: ");
        for (int i = 0; i < f; i++)
        {
            printf("%d ", *(cift+i));
        }
        printf("\n");
}
