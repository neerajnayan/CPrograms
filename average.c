
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Variable declaration 
    // int is a type
    int sonuAge = 12;
    // variable declaration and definition
    int monuAge = 15;
    // float - 
    float balance = 12.40;
    
    // int/float = float
    // (12 + 15)/2 = 13
    float average = (sonuAge + monuAge)/2.0;
    
    printf("Sonu's Age is: %05d, Monu's age is: %02d", sonuAge, monuAge);
    printf("\nAverage age is %.2f", average);
    printf("\nBalance is %.2f", balance);
    
    printf("\nHello World\n");
    return 0;
}
