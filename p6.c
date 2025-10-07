//6. CHECK WHETHER A NUMBER IS A PERFECT SQUARE://

#include <stdio.h>
#include <math.h>
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num < 0) {
printf("%d is not a perfect square (negative numbers are not perfect squares).\n", num);
return 0;
}
int root = sqrt(num);
if (root * root == num)
printf("%d is a perfect square.\n", num);
else
printf("%d is not a perfect square.\n", num);
return 0;
}
