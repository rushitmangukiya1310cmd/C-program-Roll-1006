//15. FIND THE LARGEST OF FIVE NUMBERS://

#include <stdio.h>
int main() {
int nums[5], i, largest;
printf("Enter five numbers: ");
for (i = 0; i < 5; i++) {
scanf("%d", &nums[i]);
}
largest = nums[0];
for (i = 1; i < 5; i++) {
if (nums[i] > largest) {
largest = nums[i];
}
}
printf("The largest number is: %d\n", largest);
return 0;
}
