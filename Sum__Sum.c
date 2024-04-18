#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number, value, positiveValue = 0, negativeValue = 0;
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        scanf("%d", &value);
        if(value >= 0){
            positiveValue += value;
        } else{
            negativeValue += value;
        }
    }
    printf("%d %d", positiveValue, negativeValue);
    return 0;
}
