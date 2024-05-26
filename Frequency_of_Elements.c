#include <stdio.h>
int main(){
    int arr[100], frq[100];
    int i, j, n, count;

    printf("Please enter the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
        frq[i] = -1;
    }

    for(i = 0; i < n; i++){
        count = 1;
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                frq[j] = 0;
            }
        }
        if(frq[i] != 0){
            frq[i] = count;
        }
    }
    
    printf("\nThe frequency of all elements of the array: \n");
    for(i = 0; i < n; i++){
        if(frq[i] != 0){
            printf("%d occurs %d times.\n", arr[i], frq[i]);
        }
    }

    return 0;
}