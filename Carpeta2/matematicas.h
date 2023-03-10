#ifndef _LIBRERIA
#define _LIBRERIA
// FUNCIÓN SENO:
double senot(double x)
{
	double termino=x, suma=x;
		for(int i=1;i<=10;i++)
	{
		termino *= (-x*x/((2*i)*(2*i+1)));
		suma += termino;
	}
	return suma;
}
// FUNCIÓN COSENO:
double coseno(double x)
{
	double termino=1, suma=1;
	for(int i=1;i<=10;i++)
	{
		termino=termino*(-x*x/((2*i-1)*(2*i)));
		suma=suma+termino;
	}
	return suma;
}
// FUNCIÓN EXPONENCIAL:
double expon(int x)
{
	double acum=1.0, term=1.0;
	for(int i=1;i<=20;i++)
	{
		term=term*x/i;
		acum=acum+term;
	}
	return acum;
}


#endif
