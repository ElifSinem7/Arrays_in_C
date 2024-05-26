#include <stdio.h>
int main(){
    int arr1[100], arr2[100], arr3[100];
    int n, i, j = 0, k = 0;
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < n; i++){
        if(arr1[i] % 2 == 0){
            arr2[j] = arr1[i];
            j++;
        }
        else{
            arr3[k] = arr1[i];
            k++;
        }
    }

    printf("\nThe EVEN elements: \n");
    for(i = 0; i < j; i++){
        printf("%d ", arr2[i]);
    }

    printf("\nThe ODD elements: \n");
    for(i = 0; i < k; i++){
        printf("%d ", arr3[i]);
    }

    printf("\n\n");
    
    return 0;
}