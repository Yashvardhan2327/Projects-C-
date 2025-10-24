#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, sum ;

    printf("Enter a four digit number: ");
    scanf("%d", &num);
    
    digit1 = num/1000;
    digit2 = num/100;
    digit3 = num/10;
    digit4 = num%10;
    sum = digit1 + digit2 + digit3 + digit4;
    printf("sum of digit = %d\n",sum);

    return 0;
}
