#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

struct item {
    char itemcode;
    double itemdouble;
    int itemnum;
};

int main () {
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        printf("(void *)&arr[i] = %p, arr[i] = %d\n", (void *)&arr[i], arr[i]);
    }
    printf("arr[2] = %d, *(arr + 2) = %d\n", arr[2], *(arr + 2));

    struct item itemobject;
    itemobject.itemcode = 50;
    itemobject.itemdouble = 100.667;
    itemobject.itemnum = 100;
    
    struct item *item_p = &itemobject;
    printf("Char = %c, Double = %.2f, Int = %d\n", itemobject.itemcode, itemobject.itemdouble, itemobject.itemnum);
    printf("Char = %c, Double = %.2f, Int = %d\n", item_p->itemcode, item_p->itemdouble, item_p->itemnum);

// bytes and offsets of members:
    printf("Sizeof struct = %zu\n", sizeof(struct item));
    printf("%zu\n", offsetof(struct item, itemcode));
    printf("%zu\n", offsetof(struct item, itemdouble));
    printf("%zu\n", offsetof(struct item, itemnum));

return EXIT_SUCCESS;
}
