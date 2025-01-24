#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number1,number2,number3;
    int n;
    
    srand(time(0));
    number1 = (rand()%19);
    printf("intelligence is %d\n",number1);
    
    n=20-number1;
    
    srand(time(0));
    number2 = (rand()%n);
    printf("stamina is %d\n",number2);
    
    number3=n-number2;
    
    printf("charisma is %d\n",number3);
    
    if(number1>number2 && number1>number3){
        printf("YOU ARE MAGE!!\n");
    }
    
    if(number2>number1 && number2>number3){
        printf("YOU ARE KNIGHT!!\n");
    }
    
    if(number3>number2 && number3>number1){
        printf("YOU ARE THIEF!!\n");
    }

    return 0;
}n 0;
}