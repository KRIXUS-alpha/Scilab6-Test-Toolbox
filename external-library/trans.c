/*This c program multiplies two variable values*/
#include<stdio.h>
#include <stdlib.h>
#include "trans.h"
double trans(double* answ, double* src, int num1, int num2)
{
	int n;
	for(n=0;n<num1*num2;n++){
		int i = n/num2;
		int j = n%num2;
		answ[n] = src[num1*j +i];
	}
  //printf("Inside add %f \n", answ[0]);
 return 0;
}
