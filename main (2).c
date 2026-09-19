#include <stdio.h>

int main(void) {
    int number;
    int count = 0;
    int positive = 0;
    long long sum = 0;
    
    while (count < 100) {
        printf("Enter number (-1000..1000, 0 to stop): ");
        if (scanf("%d", &number) != 1) {
            printf("Input error\n");
            break;
            
        }
        if (number == 0) {
            break;
            
        }
        if (number < -1000 || number > 1000) {
            printf("Range error\n");
            continue;
            
        }
        sum += number;
        count++; 
        
        if (number > 0) {
            positive++;
            
        }
        
    }
    printf("Count = %d\n", count);
    printf("Sum = %lld\n", sum);
    printf("Positive = %d\n", positive);
    
    return 0;
}
