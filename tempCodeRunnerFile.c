#include<stdio.h>
int main(){
    long long int sum = 0;
    int N, L, R;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){

        scanf("%d %d", &L, &R);
        
        for(int i = L; i <= R; i++){
            sum = sum + i;
        }
        printf("%lld\n" , sum);
        sum = 0;
    }
    return 0;
}