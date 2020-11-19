#include<stdio.h>
int main(){

    int i,first=1, second=1, fibonacci=0;
    printf("%d\n%d\n",first,second);

    for ( i = 1; i <= 10; i++)
    {
        
        fibonacci=first+second;
        first=second;
        second=fibonacci;

        //printf("first:%d\tsecond:%d\tfibonacci:%d\t",first,second,fibonacci);
        printf("%d\n",fibonacci);

        
        
    }
    
   
    

   

    



    

    return 0;
}