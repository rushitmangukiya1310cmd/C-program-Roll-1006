//9. CONVERT A STRING TO LOWER CASE://
#include <stdio.h>
#include <ctype.h>
int main() {
char str[100];
int i = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
while (str[i]) {
str[i] = tolower(str[i]);
i++;
}
printf("Lowercase string: %s", str);
return 0;
}
