#include <stdio.h>
#include <limits.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
  // Write your code here
    if (k<=0 || k>n)
        return -1;
    int mi= arr[0];
    
    for(int i = 0; i < n; i++){
        if(mi > arr[i]){
            mi=arr[i];
        }
    }
    if (k==1)
        return mi;
    
    int min=INT_MAX;
    int flag;
    for(int i=1; i < k; ++i){
        min=INT_MAX;
        flag=0;
        
        for(int i = 0; i < n; i++){
            if(mi < arr[i] && min> arr[i]){
                min=arr[i]; 
                flag=1;
            }
        }
        if(!flag)
            return mi;
        mi=min;
    }
    return mi;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}