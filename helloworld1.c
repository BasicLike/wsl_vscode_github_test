#include <stdio.h>

unsigned int uiSum;

int main()
{
    printf("Hello, C World!\n");
    printf("Hello, C World!\n");
    printf("Hello, C World!\n");
    printf("Hello, C World!\n");

    printf("__STDC_VERSION__ = %ld\n", __STDC_VERSION__);

    unsigned int uiCtr;
    uiSum = 0;
    for(uiCtr = 0; uiCtr < 100; uiCtr++) 
    {
        uiSum += uiCtr;
    }
    printf("%d\n", uiSum);
    
    return 0;
}
