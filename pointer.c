#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i=0;
float ortalama(int *a,int *b)
{
    int j=i*2;
    float toplam=0;
    for (;i>0;i--)
    {
        toplam+=*(a+i-1)+*(b+i-1);
    }
    return toplam/j;
}
int main()
{
    int c,d;
    int *a,*b;
    a=(int*)calloc(1,sizeof(int));
    b=(int*)calloc(1,sizeof(int));
    printf("-1 girilene kadar sayi\n");
    for (;;i++)
    {
        printf("a icin sayi");
        scanf("%d",&c);
        printf("b icin sayi");
        scanf("%d", &d);
        if (c==-1 || d==-1)
        {
            break;
        }
        else
        {
            *(a+i)=c;
            *(b+i)=d;
            
        }
        a=(int*)realloc(a,sizeof(int)*(i+2));
        b=(int*)realloc(b,sizeof(int)*(i+2));
    }
    printf("ortalama = %.2f\n",ortalama(a,b));
    return 0;
}