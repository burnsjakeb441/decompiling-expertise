#include <stdio.h>             // preprocessing directive: includes the standard header stdio.h (declares printf)
#include <stdlib.h>            // preprocessing directive: includes stdlib.h (defines the EXIT_SUCCESS macro)

void swap(int *pa, int *pb) {  // function definition: return type void (returns nothing), identifier swap,
                               //   parameter list with two parameters, pa and pb, each of type "pointer to int"
                               //   (the * here is a pointer declarator); { opens the function body (a compound statement, or block)

    int t = *pa;               // declaration with an initializer: object t of type int, automatic storage duration;
                               //   *pa uses the unary * (indirection) operator to read the int that pa points to

    *pa = *pb;                 // expression statement using the assignment operator (=):
                               //   *pb reads the int pb points to; *pa designates the object pa points to, which gets that value

    *pb = t;                   // expression statement: stores t's value into the object pb points to
}                              // closes the function body; t's lifetime ends here

int main() {                   // function definition: return type int, identifier main, empty parameter list
                               //   (no parameters in C23); main is the program's entry point

    int a = 21;                // declaration with initializer: object a, type int, automatic storage duration
    int b = 17;                // declaration with initializer: object b, type int, automatic storage duration

    swap(&a, &b);              // function call expression; the arguments use the unary & (address-of) operator,
                               //   producing pointers to a and b; the pointers themselves are passed by value

    printf("a = %d, b = %d\n", a, b);  // call to printf, a variadic function: "a = %d, b = %d\n" is a string literal
                               //   used as the format string; %d is a conversion specification (print an int);
                               //   \n is an escape sequence (newline); a and b are the arguments it prints

    return EXIT_SUCCESS;       // return statement (a jump statement); EXIT_SUCCESS is a macro meaning success
}                              // closes main's body; a and b's lifetimes end here
