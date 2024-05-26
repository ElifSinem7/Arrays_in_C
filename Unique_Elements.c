#include <stdio.h>
int main(){
    int n, i, j, k, arr[100], count = 0;
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for(i = 0; i < n; i++){
        count = 0;
        for(j = 0, k = n; j < k+1; j++){
            if(i != j){
                if(arr[i] == arr[j]){
                    count++;
                }
            } 
        }
        if(count == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n\n");

    return 0;
}