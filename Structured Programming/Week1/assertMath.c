#include <stdio.h>
#include <assert.h>

int main() {
    double x, y;
    
    while (1) {
        printf("Enter two floats: ");
        scanf("%lf %lf", &x, &y);
        
        assert(y != 0); // Ensure y is not zero
        
        printf("x / y = %.2f\n", x / y);
    }
    
    return 0;
}