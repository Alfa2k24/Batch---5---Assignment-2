#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);

    if( number >= 1){
        for(int i = 1; i <= number; i++){
            printf("%d ", i);
        }
    } else {
        for( int i = number; i <= 0; i++){
            printf("%d ", i);
        }
    }
    return 0;
}



// Accepted.