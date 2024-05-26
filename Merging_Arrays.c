#include <stdio.h>
int main(){
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, n3;
    int i, j, k;
    printf("Please enter the number of elements to be stored in the first array: \n");
    scanf("%d", &n1);
    for(i = 0; i < n1; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nPlease enter the number of elements to be stored in the second array: \n");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;

    for(i = 0; i < n1; i++){
        arr3[i] = arr1[i];
    }
    for(j = 0; j < n2; j++){
        arr3[i] = arr2[j];
        i++;
    }

    for(i = 0; i < n3; i++){
        for(k = 0; k < n3-1; k++){
            if(arr3[k] <= arr3[k+1]){
                j = arr3[k+1];
                arr3[k+1] = arr3[k];
                arr3[k] = j;
            }
        }
    }

    printf("\nThe merged array in decending order is: \n");
    for(i = 0; i < n3; i++){
        printf("%d ", arr3[i]);
    }
    printf("\n\n");

    return 0;
}