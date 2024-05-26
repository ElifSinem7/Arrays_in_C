#include <stdio.h>
int main(){
    int n, i, arr1[100], arr2[100];
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
    printf("\nElements in the first array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nElements copied into the second array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}