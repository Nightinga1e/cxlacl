#include <stdio.h>
#include <math.h>
#include "summ.h"
#include "multip.h"
#include "divide.h"
#include "subt.h"
#include "mode.h"

int main(){
	double x = 0;
	double y = 0;
	double result = 0;
	scanf("%lf %lf", &x, &y);
	result = SUM(x,y);
	printf("\nx=%.3f y=%.3f \nSUM result=%.3f\n", x,y,result);
	result = MULT(x,y);
	printf("\nx=%.3f y=%.3f \nMULTIP result=%.3f\n", x,y,result);
	result = DIVI(x,y);
	printf("\nx=%.3f y=%.3f \nDIVI result=%.3f\n", x,y,result);
	result = SUBT(x,y);
	printf("\nx=%.3f y=%.3f \nSUBT result=%.3f\n", x,y,result);
	int x1=(int)x;
	int y1=(int)y;
	int result1 =0;
	result1 = MODE(x1,y1);
	printf("\nx=%d y=%d \nMODE result=%d\n", x1,y1,result1);


	return 0;
}
