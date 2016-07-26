#include <stdio.h>

int main()
{
    int i, j, num, temp, minimum, index_2;
    printf("array[number] - Enter the number : ");
    scanf("%d", &num);
    int ara[num];
    printf("Enter the elements one by one : \n");
    for (i = 0; i < num; i++) {
        scanf("%d", &ara[i]);
    }
    for (i = 0; i < num; i++) {
        minimum = 100000;
        for (j = i; j < num; j++) {
            if (ara[j] < minimum) {
                minimum = ara[j];
                index_2 = j;
            }
        }
        temp = ara[i];
        ara[i] = minimum;
        ara[index_2] = temp;
    }
    printf("Sorted array is : \n");
    for (i = 0; i < num; i++) {
        printf("\t%d\n", ara[i]);
    }
    return 0;
}
