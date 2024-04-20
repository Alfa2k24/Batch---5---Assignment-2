#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int L, R;
        scanf("%d %d", &L, &R);
        
        long long int sum = 0;
        for(int i = L; i <= R; i++){
            sum = sum + i;
        }

        printf("%lld\n" , sum);
    }
    return 0;


    // after submit this code, CodeForces show TLE!!!
    // Need to solve it in different way's
}