#include <stdio.h>
#include <string.h>

int reverse() {
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);
    //return 0;
}
