#include <stdio.h>

int main(){
    int size,sum=0,prod=1;

    printf("Enter the size of the square matrix: ");
    scanf("%d",&size);

    int arr[size][size],i,j;

    printf("Enter the elements of %dx%d matrix: ",size,size);

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The original matrix: \n");
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<size;i++){
        sum += arr[i][size-1-i];
        prod *= arr[i][size-1-i];
    }

    printf("The sum of the anti-diagonal is: %d\n",sum);
    printf("The product of the anti-diagonal is: %d",prod);

    return 0;
}