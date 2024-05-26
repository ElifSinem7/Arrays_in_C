#include <stdio.h>
int main(){
    int n, i, j, arr[100], count = 0;
    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array: %d", count);

    return 0;
}