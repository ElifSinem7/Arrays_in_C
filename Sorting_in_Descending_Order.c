#include <stdio.h>
int main(){
    int arr[100];
    int n, i, j, temp;

    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of the array in sorted descending order: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}