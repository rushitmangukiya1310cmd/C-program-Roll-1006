//12 . CALCULATE THE PERIMETER OF SQUARE://

#include <stdio.h>
int main() {
float side, perimeter;
printf("Enter the length of the side of the square: ");
scanf("%f", &side);
perimeter = 4 * side;
printf("Perimeter of the square = %.2f\n", perimeter);
return 0;
}
