#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct hasta{
    int no;
    char isim[20];
    int yas;
    char hastalik[20];
}hst,bos={0,"",0,""};
int nmb=0;
typedef struct hasta node;
void arama(FILE *);
void silme(FILE *);
void duzenle(FILE *);
void listele(FILE *);
void aktar(FILE *,FILE *);
void listelebelge(FILE *);
int main(){
        FILE *ptr,*myptr;
        int option;
        if((ptr=fopen("hastalar.dat","w"))==NULL && (myptr=fopen("belge.dat","w"))== NULL) printf("dosya olusturulamadi!!!");
        else{
            printf("sirasiyla no,hasta ismi,yas ve hastalik giriniz(no'ya -1 girince bitir)\n-->");
            scanf("%d",&hst.no);
            while(hst.no!=-1){
                nmb++;
                scanf("%s %d %s",hst.isim,&hst.yas,hst.hastalik);
                fwrite(&hst,sizeof(node),1,ptr);
                printf("\n-->");
                scanf("%d",&hst.no);
            }
            q:
            printf("yapmak istediginiz islemi seciniz\n1-)no ya gore arama yap\n2-)kayit sil\n3-)kayit duzenle\n4-)kayitlari listele\n5-)foramtli olarak belge.dat dosyasina cevirme\n6-)belge.dat listele\n--->");
            scanf("%d",&option);
            switch(option)
            {
                case 1:
                arama(ptr);
                goto q;
                break;
                case 2:
                silme(ptr);
                goto q;
                break;
                case 3:
                duzenle(ptr);
                goto q;
                break;
                case 4:
                listele(ptr);
                goto q;
                break;
                case 5:
                aktar(ptr,myptr);
                goto q;
                break;
                case 6:
                listelebelge(myptr);
                goto q;
                break;
                default:
                printf("program sonlandiriliyor......!\n");
                break;
            }
        }
                fclose(ptr);
                return 0;
    }
    void arama(FILE *ptr){
        printf("bulmak istediginiz hastanin numarasini giriniz(1 ile %d arasi):",nmb);
        int n;
        scanf("%d",&n);
        fclose(ptr);
        ptr=fopen("hastalar.dat","r");
        fseek(ptr,sizeof(node)*(n-1),SEEK_SET);
        fread(&hst,sizeof(node),1,ptr);
        printf("aradiginiz eleman bulundu!!!\nno: %d\nisim: %s\nyas: %d\nhastalik: %s\n",hst.no,hst.isim,hst.yas,hst.hastalik);
    }
    void silme(FILE *ptr){
        fclose(ptr);
        ptr=fopen("hastalar.dat","r+");
        printf("silmek istediginiz hastanin numarasini giriniz(1 ile %d arasi):",nmb);
        int n;
        scanf("%d",&n);
        fseek(ptr,sizeof(node)*(n-1),SEEK_SET);
        fread(&hst,sizeof(node),1,ptr);
        fseek(ptr,sizeof(node)*(n-1),SEEK_SET);
        fwrite(&bos,sizeof(node),1,ptr);
    }
    void duzenle(FILE *ptr){
        printf("duzenlemek istediginiz hastanin numarasini giriniz(1 ile %d arasi):",nmb);
        int n;
        scanf("%d",&n);
        fclose(ptr);
        ptr=fopen("hastalar.dat","r+");
        fseek(ptr,sizeof(node)*(n-1),SEEK_SET);
        printf("yeni bilgileri giriniz:\n");
        printf("sirasiyla no,hasta ismi,yas ve hastalik giriniz\n-->");
        scanf("%d",&hst.no);
        scanf("%s %d %s",hst.isim,&hst.yas,hst.hastalik);
        fwrite(&hst,sizeof(node),1,ptr);
    }
    void listele(FILE *ptr){
        fclose(ptr);
        ptr=fopen("hastalar.dat","r");
        fread(&hst,sizeof(node),1,ptr);
        while(!feof(ptr)){
            printf("no: %d\nisim: %s\nyas: %d\nhastalik: %s\n*****",hst.no,hst.isim,hst.yas,hst.hastalik);
            fread(&hst,sizeof(node),1,ptr);
        }
    }
    void aktar(FILE *ptr,FILE *myptr){
        fclose(ptr);
        ptr=fopen("hastalar.dat","r");
        myptr=fopen("belge.dat","w");
        fread(&hst,sizeof(node),1,ptr);
        while(!feof(ptr)){
            fprintf(myptr,"%d %s %d %s\n",hst.no,hst.isim,hst.yas,hst.hastalik);
            fread(&hst,sizeof(node),1,ptr);
        }
    }
    void listelebelge(FILE *myptr){
        fclose(myptr);
        if((myptr=fopen("belge.dat","r"))==NULL) printf("dosya olusturulamadi, lutfen once dosyayi doldurunuz!!!\n");
        else
        {
            fscanf(myptr,"%d %s %d %s",&hst.no,hst.isim,&hst.yas,hst.hastalik);
            while(!feof(myptr)){
                printf("no: %d\nisim: %s\nyas: %d\nhastalik:%s\n********\n",hst.no,hst.isim,hst.yas,hst.hastalik);
                fscanf(myptr,"%d %s %d %s",&hst.no,hst.isim,&hst.yas,hst.hastalik);
            }
        }
    }