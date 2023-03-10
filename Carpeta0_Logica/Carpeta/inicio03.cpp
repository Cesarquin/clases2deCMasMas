#include<iostream>
#include<math.h>
main()
{
	int a, b, c;
	float D, re, im=0, x1, x2;
	printf("Ingrese a, b y c: \n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	if(b*b-4*a*c < 0)
	{
		D=sqrt(4*a*c-b*b)/(2*a);
		im=D;
		re=-b/(2*a);
		x1=re;
		x2=re;
	}
	else
	{
		D=sqrt(b*b-4*a*c);
		x1=(-b+D)/(2*a);
		x2=(-b-D)/(2*a);
	}
	printf("x1 = %f + i*%f \n",x1,im);
	printf("x2 = %f - i*%f \n",x2,im);

}


