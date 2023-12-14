#include <stdio.h>
#include <math.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    
    int numDigits = log10(N) + 1;
    int divisor = pow(10, numDigits - X);

    
    int firstDigits = N / divisor;

    
    int lastDigits = N % (int)pow(10, X);

    
    int absoluteDifference = abs(firstDigits - lastDigits);


    printf("%d
", absoluteDifference);


}
