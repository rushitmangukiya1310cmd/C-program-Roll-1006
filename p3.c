//3. FIND THE SMALLEST OF THREE NUMBERS://

#include <stdio.h>
int main() {
int a, b, c;
printf("Enter three integers: ");
scanf("%d %d %d", &a, &b, &c);
int smallest;
if (a <= b && a <= c)
smallest = a;
else if (b <= a && b <= c)
smallest = b;
else
smallest = c;
printf("The smallest number is: %d\n", smallest);
return 0;
}
