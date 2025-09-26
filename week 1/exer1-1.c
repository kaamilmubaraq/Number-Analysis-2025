#include <stdio.h>

int main(void) {
    int i;
    //Read an integer from standard input
    printf("Enter an integer: ");
    scanf("%d",&i);
    //Check the number of digits in the integer
    int count = 0;
    while (i != 0){
        i /= 10;
        count++;
    }
    //Print the number of digits
    printf("%d\n", count);
    return 0;
}