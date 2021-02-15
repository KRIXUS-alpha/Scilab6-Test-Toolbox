#include<stdio.h>
#include "trans.h"
int main(void)
{
	double ar[4];
	double d[4];
	trans(d,ar, 2,5);
  printf("Inside main %f \n", ar[0]);
  return 0;
}
