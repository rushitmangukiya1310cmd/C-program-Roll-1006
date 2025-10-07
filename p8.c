//8. COMPUTE THE SUM OF EVEN ELEMENTS IN AN ARRAY://

#include <stdio.h>
int main() {
int arr[100], n, i, sum = 0;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
for (i = 0; i < n; i++) {
if (arr[i] % 2 == 0) {
sum += arr[i];
}
}
printf("Sum of even elements = %d\n", sum);
return 0;
}
