#include <stdio.h>

int main()
{
    int arr3[2][3][4] = { 0 };
    int (*p)[3][4] = arr3;

    printf("%zu\n", sizeof(p)); // 8
    printf("%zu\n", sizeof(*p)); // 48
    printf("%zu\n", sizeof(**p)); // 16
    printf("%zu\n", sizeof(***p)); // 4

    printf("%p\n", (void*)p);
    printf("%p\n", (void*)*p);
    printf("%p\n", (void*)**p);
    printf("%d\n", ***p);
    return 0;
}
