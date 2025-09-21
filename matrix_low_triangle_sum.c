#include <stdio.h>

int main(){
    int size,i,j,sumlow=0;
    printf("Enter the size of a square matrix: ");
    scanf("%d",&size);

    int arr[size][size];
    printf("Enter the value of the %dx%d matrix: ",size,size);
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The entered matrix is: \n");
    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            if (i>=j){
                sumlow += arr[i][j];
            }
        }
    }

    printf("\nThe sum of the upper triangle is: %d",sumlow);
}