#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);        
    }

    for(int j = n-1; j >= 0; j--){
         if(j % 2 == 1){
         printf("%d ",arr[j]);
        }
    }
    return 0;
    
    // Accepted
}
