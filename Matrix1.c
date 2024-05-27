#include <stdio.h>
int main(){
    int arr[100][100];
    int n1, n2, i, j;
    printf("Please enter the number of elements to be stored in the first part of the array: \n");
    scanf("%d", &n1);
    printf("\nPlease enter the number of elements to be stored in the second part of the arrat: \n");
    scanf("%d", &n2);
    for(i = 0; i < n1; i++){
        for(j = 0; j < n2; j++){
            printf("Element - [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(i = 0; i < n1; i++){
        printf("\n");
        for(j = 0; j < n2; j++){
            printf("%d\t", arr[i][j]);
        }
    }

    return 0;
}