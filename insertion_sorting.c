#include<stdio.h>

int main(){

    int n,i,tmp,j;
    printf("Enter array dimension: ");
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the numbers for array:\n");
        scanf("%d",&array[i]);
    }

    for (i=1; i<n; i++){
        tmp = array[i];
        j=i;

        while ((j>0) && (tmp<array[j-1]))
        {
            array[j]=array[j-1];
            j=j-1;
        }
        array[j]=tmp;
        
    }
    printf("*********reordered array*********\n");
    for ( i = 0; i < n; i++){
        printf("%d\n",array[i]);
    }
    
    
    









    return 0;
}