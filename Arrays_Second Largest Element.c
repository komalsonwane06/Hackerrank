#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
    if(n<2)
        return -1;
    int max =INT_MIN;
    int max2=INT_MIN;
    for(int i=0; i<n; ++i){
        if(max<arr[i]){
            max2=max;
            max=arr[i];
        }
        else if(max>arr[i] && arr[i]>max2){
            max2=arr[i];
        }
    }
    if(INT_MIN==max2)
        return -1;
    else 
        return max2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}