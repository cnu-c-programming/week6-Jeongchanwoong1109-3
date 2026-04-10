#include <stdio.h>

void print_arr(int* p, int size) {
    printf("%zu\n", sizeof(p)); // 8
    for (int i = 0;i < size;i++)
        printf("% d", *(p + i)); // 1 2 3 4 5
    printf("\n");
}

int main()
{
    int arr[5] = { 1,2,3,4,5 };
    printf("%zu\n", sizeof(arr)); // 20
    for (int i = 0;i < 5;i++)
        printf("%d ", *(arr + i)); // 1 2 3 4 5 
    printf("\n");

    print_arr(arr, 5);
    return 0;
}
