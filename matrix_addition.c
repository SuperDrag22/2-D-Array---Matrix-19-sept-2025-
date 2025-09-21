#include <stdio.h>

int main(){
    int r,c,i,j;

    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of columns: ");
    scanf("%d",&c);

    int arr1[r][c],arr2[r][c];

    printf("Enter the elements for matrix 1: ");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements for matrix 2: ");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    int arrsum[r][c];
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            arrsum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nThe addition of both arrays is: \n");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d ",arrsum[i][j]);
        }
        printf("\n");
    }

    return 0;
}