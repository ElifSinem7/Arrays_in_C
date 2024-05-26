#include <stdio.h>

int main(){
    int n, i, arr[100];
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements in the array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}