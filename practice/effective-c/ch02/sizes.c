#include <stdlib.h>
#include <stdio.h>

int main() {
printf("int: %zu bytes\n", sizeof(int));
printf("bool: %zu bytes\n", sizeof(bool));
printf("char: %zu bytes\n", sizeof(char));
printf("short: %zu bytes\n", sizeof(short));
printf("long: %zu bytes\n", sizeof(long));
printf("long long: %zu bytes\n", sizeof(long long));
printf("float: %zu bytes\n", sizeof(float));
printf("double: %zu bytes\n", sizeof(double));
printf("int *: %zu bytes\n", sizeof(int *));
printf("double *: %zu bytes\n", sizeof(double *));
printf("char *: %zu bytes\n", sizeof(char *));

return EXIT_SUCCESS;
}
