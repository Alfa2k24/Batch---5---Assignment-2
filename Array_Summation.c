#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int arr[num];

    for(int i = 0; i < num;i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for(int j = 0; j < num; j++){

        printf("%d = %d ", j, arr[j]);

        arr[j] = arr[j] + arr[j];
        printf(" => %d \n",arr[j]);
    }
    return 0;

    // For Practice Purpose 
    // Problem accepted
}