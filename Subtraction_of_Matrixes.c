#include <stdio.h>
int main(){
    int arr1[5][5], arr2[5][5], arr3[10][10];
    int n, i, j;
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nPlease enter the elements of the second matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nFirst matrix: \n");
    for(i = 0; i < n; i++){
        printf("\n");
        for(j = 0; j < n; j++){
            printf("%d\t", arr1[i][j]);
        }
    }
    printf("\nSecond matrix: \n");
    for(i = 0; i < n; i++){
        printf("\n");
        for(j = 0; j < n; j++){
            printf("%d\t", arr2[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("\nThe subtraction of two matrix: \n");
    for(i = 0; i < n; i++){
        printf("\n");
        for(j = 0; j < n; j++){
            printf("%d\t", arr3[i][j]);
        }
    }

    return 0;
}