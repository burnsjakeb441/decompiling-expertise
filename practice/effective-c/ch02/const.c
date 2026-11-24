#include <stdio.h>
#include <stdlib.h>

const int maximum = 6; 
int a, b;
const int *p = &a; // p is a pointer to a const int: can't write *p, can change p.
int *const q = &a; // q is a const pointer to an int: can't change q, can write *q
extern int c; // extern test -declaration, tells compiler "an int named c exists somewhere", but doesn't create storage for it

int main () {
    // part 1:
    // prediction: it will not compile, because its trying to write to a read only const object. 
    // result: error, assignment of read-only variable
    // maximum = 2;
    printf("maximum: %d\n", maximum);

    // part 2:
    // prediction: fails to compile, because *p is what is read-only, 
    // result: error, assignment of read-only location '*p'
    // *p = 20;

    // prediction: succeeds, because p is a pointer to a const int, and p itself can be reassigned, 
    // result: compiles, *p printed 30
    b = 30;
    p = &b;
    printf("*p: %d\n", *p);

    // part 3:
    // prediction: fails, because can't write q, meaning the address it stores is read-only, 
    // result: error, assignment of read-only variable ‘q’ 
    // q = &b; 

    // prediction: succeeds, because the const applies to q, not to the int it points at, meaning *q can be written
    // result: compiled, *q printed 20
    *q = 20;
    printf("*q: %d\n", *q);
    printf("a: %d\n", a);
    
    // Distinction: int *const q makes the variable q itself immutable (stored address), while const int *p makes the dereferenced expression *p immutable

    //part 4:

    //test at end, c = 6;

return EXIT_SUCCESS;
}
