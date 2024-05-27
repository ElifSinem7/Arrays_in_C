#include <stdio.h>
int main(){
    int arr[100];
    int i, n, j, temp;
    printf("Please enter the number of the elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    return 0;
}