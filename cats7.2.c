#include <stdio.h>

int main(void)
{
    int total=0;
    
    for(int i=1;i<=10;i++)
    {
        total=total+i;
    }
    printf("１から１０までの和は%dです。",total);
    
    return 0;
}