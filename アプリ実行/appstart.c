#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    /* 絶対パス */
    char passbuf[] = "A.txt";

    system(passbuf);

    printf("終了します\n");

    return 0;
}