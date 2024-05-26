#include <stdio.h>
int main(){
    int n, i, arr[100], sum = 0;
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nElements in the array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nSum of all elements in the array: %d", sum);

    return 0;
}