#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char name[20],rname[20],maxname[20];
    int age,counter=0,max=0,c=0;
    FILE *ptr;
    if((ptr=fopen("dnm.dat","w"))==NULL) printf("no file");
    else{
        printf("enter name and age: (-1 to age to end up)");
        scanf("%s %d",name,&age);
            while(age!=-1){
            fprintf(ptr,"%s %d \n",name,age);
            printf("enter name and age: (ctrl z to end up)");
            scanf("%s %d",name,&age);
        }
        rewind(ptr);
        int option;
        q:
        printf("select option you want: \n1-)list records\n2-)find a record\n3-)find the older record\n4-)find the records who is under 18 years\n-->");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
        if((ptr=fopen("dnm.dat","r"))==NULL) printf("no file");
    else{
            fscanf(ptr,"%s %d",name,&age);
            while(!feof(ptr)){
                printf("--> name: %s\n---> age: %d\n*****\n",name,age);
                fscanf(ptr,"%s %d",name,&age);
            }
            rewind(ptr);
    }
    goto q;
    break;
            case 2:
            w:
            if((ptr=fopen("dnm.dat","r"))==NULL) printf("no file");
    else{
        printf("enter name of record you want to find:");
        scanf("%s",rname);
        fscanf(ptr,"%s %d",name,&age);
        while(!feof(ptr)){
            if((strcmp(rname,name)==0)){
                printf("record infos\n---->name: %s\n age---->%d\n*******************\n",name,age);
                counter=1;
            }
            fscanf(ptr,"%s %d",name,&age);
        }
        if(counter==0) {printf("record could not find try again!!!\n");
        goto w;}
    }  
    goto q;
    break;
        case 3:
        if((ptr=fopen("dnm.dat","r"))==NULL) printf("no file");
    else{
        fscanf(ptr,"%s %d",name,&age);
        while(!feof(ptr))
        {
            if(age>max){
                max=age;
                strcpy(maxname,name);
            }
        fscanf(ptr,"%s %d",name,&age);
        }
        printf("older record infos:\nname: %s\nage: %d\n************************\n",maxname,max);
    }
    rewind(ptr);
    goto q;
    break;
        case 4:
        if((ptr=fopen("dnm.dat","r"))==NULL) printf("no file");
    else{
        printf("***** records under 18 years *****\n");
        fscanf(ptr,"%s %d",name,&age);
        while(!feof(ptr)){
            if(age<18){
                printf("name: %s\nage: %d\n**********\n",name,age);
                c=1;
            }
        fscanf(ptr,"%s %d",name,&age);
        }
        if(c==0){
            printf("records under 18 years could not find!!!\n");

        }
    }
    rewind(ptr);
    goto q;
    break;
    default:
    printf("program is ending up..........!!!\n");
    break;
        }   
        rewind(ptr);
        fclose(ptr);

    }
    
    
    return 0;
}