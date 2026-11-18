#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

struct item {
    char itemcode;
    double itemdouble;
    int itemnum;
};

union float_bits {
    float as_float;
    uint32_t as_bits;
};

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main () {
    //array
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        printf("(void *)&arr[i] = %p, arr[i] = %d\n", (void *)&arr[i], arr[i]);
    }
    printf("arr[2] = %d, *(arr + 2) = %d\n", arr[2], *(arr + 2));
    //struct: . vs ->, padding and offsets
    struct item itemobject;
    itemobject.itemcode = 50;
    itemobject.itemdouble = 100.667;
    itemobject.itemnum = 100;

    struct item *item_p = &itemobject;
    printf("Char = %c, Double = %.2f, Int = %d\n", itemobject.itemcode, itemobject.itemdouble, itemobject.itemnum);
    printf("Char = %c, Double = %.2f, Int = %d\n", item_p->itemcode, item_p->itemdouble, item_p->itemnum);

    //bytes and offsets of struct members:
    printf("Sizeof struct = %zu\n", sizeof(struct item));
    printf("itemcode offset = %zu\n", offsetof(struct item, itemcode));
    printf("itemdouble offset = %zu\n", offsetof(struct item, itemdouble));
    printf("itemnum offset = %zu\n", offsetof(struct item, itemnum));

    //declare object union
    union float_bits fb;
    fb.as_float = 1.0f;

    printf("Float_bits = %x\n", fb.as_bits); 
    printf("Size of union =  %zu\n", sizeof(union float_bits));

    //function pointers
    int (*fp)(int, int);
    fp = &add;
    printf("Sum: %d\n", (*fp)(10, 3));
    fp = &subtract;
    printf("Difference: %d\n", (*fp)(10, 3));
return EXIT_SUCCESS;
}
