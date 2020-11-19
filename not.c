#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,i,k,j, kalan_sayisi=0;
    float sum=0, ave;;
    printf("Öğrenci sayısını giriniz:");
    scanf("%d", &n);
    int *dizi;
    dizi = (int *) malloc(n*sizeof(int));
    if (!dizi){
        printf("Yer ayrılamadı");
        exit(0);
    }
    for (i=0;i<n;i++){
        printf("%d. öğrencinin notlarını giriniz:\n",i+1);
        scanf("%d", &dizi[i]);
        sum+=dizi[i];
    }
    ave=sum/n;
    k=0;
    while(k<n){

        if (dizi[k]<ave){
            kalan_sayisi++;
        }
        k++;

    }
    int *dizi_kalan;
    dizi_kalan = (int *) calloc(kalan_sayisi,sizeof(int));

    if (!dizi){
        printf("Yer ayrılamadı");
        exit(0);
    }
    i=0; j=0;
    while(i<n){
        if (dizi[i]<ave){
            dizi_kalan[j]=i;
            j++;
        }


        i++;
    }
  
    for ( i = 0; i < j; i++)
    {
        printf("%d. öğrenci kaldı\n",(dizi_kalan[i] + 1 ));
    }
    
        
  


    

    

    
    
    





















    return 0;
}


