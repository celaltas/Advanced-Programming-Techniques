#include<stdio.h>

int main(){   
    
    int m, i=0,j=0;
    printf("Matris boyutunu giriniz:");
    scanf("%d",&m);

    static int examp[10][10];
  
    for (i = 0; i < m; i++){
        for (j=0;j<m; j++){

            printf("Matrisin %d. satır %d. sütun elemanını giriniz:", i+1,j+1);
            scanf("%d", &examp[i][j]);

            }
        }
       
        
    int k=0,l=1, flag=0;
    
    while((k<m-1)&&(!flag)){

        l=k+1;
        while((l<m)&&(!flag)){

                if( examp[k][l]!=examp[l][k]){

                        flag=1;
                }
            l++;
        }

        k++;
    }

    if (flag!=0){
        printf("Simetrik değildir");
    }
    else
    {
        printf("Simetriktir");
    }
    

    
     return 0;
}

