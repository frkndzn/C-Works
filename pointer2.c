#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print(char *a)
{
    int j =0;
    for(;*(a+j)!='\0';j++)
    {
        printf("%c",*(a+j));
    }
    printf("\n");
}
int main()
{
    char *a;
    int i=0,option,n;
    a=(char*)calloc(sizeof(char),1);
    printf("enter words: (when you put 1 getting words gotto over)\n");
    while(*(a+i-1)!='1')
    {
        scanf("%c",&*(a+i));
        a=(char*)realloc(a,sizeof(char)*(i+2));
        i++;
    }
    *(a+i-1)='\0';
    printf("yapmak istediginiz islemi seciniz:\n1-)strcpy\n2-)strlen\n3-)strcat\n4-)strcmp\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
    printf("kac elemanli bir char olusturmak istersiniz?\n");
    scanf("%d",&n);
    char *cpy;
    cpy=(char*)malloc(sizeof(char));
    for(i=0;i<n;i++)
    {
        cpy=(char*)realloc(cpy,sizeof(char)*(i+2));
    }
    *(cpy+i-1)='\0';
    char l[20];
    printf("kopyalamak istediginiz wordleri giriniz:");
    scanf("%s",l);
    strcpy(a,"");
    printf("kopyalanan words: %s\n",cpy);
    break;
    case 2:
    printf("girdiginiz wordlerin sayisi: %lu\n",strlen(a));
    break;
    case 3:
    printf("kac elemanli bir char olusturmak istersiniz?\n");
    scanf("%d",&n);
    char *cat;
    cat=(char*)malloc(sizeof(char));
    for(i=0;i<n;i++)
    {
        cat=(char*)realloc(cat,sizeof(char)*(i+2));
    }
    *(cat+i-1)='\0'; 
    printf("enter words:");
    scanf("%s",cat);
    printf("%s\n",strcat(a,cat));
    break;
    case 4:
    printf("kac elemanli bir char olusturmak istersiniz?\n");
    scanf("%d",&n);
    char *cmp;
    cmp=(char*)malloc(sizeof(char));
    for(i=0;i<n;i++)
    {
        cmp=(char*)realloc(cmp,sizeof(char)*(i+2));
    }
    *(cmp+i-1)='\0'; 
    printf("enter words:");
    scanf("%s",cmp);
    if((strcmp(a,cmp))>0) {
    printf("%s > %s\n",a,cmp);}
    else if((strcmp(a,cmp))==0){ 
    printf("%s = %s\n",a,cmp);}
    else if((strcmp(a,cmp))<0){ 
    printf("%s < %s",a,cmp);}
    break;
    default:
    printf("yanlis secim.....\n***program sonlandiriliyor>>>>");
    break;
    }
    return 0;
}