#include<stdio.h>

int main(){


    char letter[27]="abcdefghijklmnopqrstuvwxyz";
    int count[27]={0};
    char array[1000];
    int i=0, k=0;
    int kelime=1;
    int cumle=0;

    printf("Bir metin giriniz:\n");
    fgets(array,1000,stdin);

    while(array[k]){
        
        if (array[k]>='A' && array[k]<='Z'){
            array[k] = (array[k]-'A')+'a';
        }
        k++;
        
    }
   

    
    while (array[i]){
        
        if (array[i]==' '){
            kelime++;
        }
        if (array[i]=='.' || array[i]=='?' || array[i]=='!'){
            cumle++;
        }

        for (int j=0; j<25;j++){
            
            if (array[i]==letter[j]){
                
               count[j]++;
            }
            
        }

        i++;
    }
    printf("cumle sayısı:%d\n",cumle);
    printf("kelime sayısı:%d\n",kelime);
    printf("harf sayısı:%d\n",(i-kelime-cumle));
    printf("karakter sayısı:%d\n",i-1);

    for (int i=0; i<26; i++){
        printf("%c:%d\n",letter[i],count[i]);
    }

    

    return 0;
}