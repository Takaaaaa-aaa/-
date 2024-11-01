#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
	printf("long double型の最大値:%Lf\n",LDBL_MAX);
	printf("long double型の最小値:%Lf\n",LDBL_MIN);
	printf("long double型の精度:%Lf\n",LDBL_DIG);
	printf("shrot型の最大値:%s\n",SHRT_MAX);
	printf("short型の最小値:%s\n",SHRT_MIN);
	
	return 0;
}