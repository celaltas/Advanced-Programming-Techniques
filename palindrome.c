#include<stdio.h>
int main(){


   char word[50];
   int i,j,n=0;

   printf("Kelime giriniz: ");
   scanf("%s",word);


   while (word[n]!='\0'){
        n++;
   }
   
   for (i=(n-1), j=0; i>-1, j<n; i--,j++){
       if (word[j]==word[i]){
            if (i==0){
                printf("Kelime palindromdur.\n");
            }
       }
      else
      {
          printf("Kelime palindrom değildir.\n");
          break;
      }      
   }
   

   
   
   

   














    return 0;
}