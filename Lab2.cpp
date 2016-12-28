/*
Лабораторная работа №2
Задание 2: Калькулятор с вводимыми с клавиатуры значениями a и b
Николаев Владимир
Группа: ИУ8-14
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

double sum ( float a,  float b);
double sub ( float a,  float b);
double mult ( float a,  float b);
double div ( float a,  float b, int* c );
double pow ( float a, int* extent, int* c);
double sq ( float a, int* c );

int main (void)
{
	float a = 0.0;
	float b = 0.0;
	int* c = (int*)malloc(sizeof(int));
	int* extent = (int*)malloc(sizeof(int));
	*c = 0;
	*extent = 0;
	cout << endl << "Calculator 2.0";
	cout << endl << endl << "Print a = "; 
	cin >> a;
	cout << "Print b = ";
	cin >> b;
	cout << endl << "a + b = " << sum(a,b) << endl;
	cout << "a - b = " << sub(a,b) << endl;
	cout << "a * b = " << mult(a,b) << endl;
	div(a,b,c);
	if ( *c == 0 ) cout << "a / b = " << div(a,b,c) << endl;
		else cout << "a / b = Error: it can not be divided by zero" << endl;
	cout << "a^e, print e = ";
	cin >> *extent;
	pow(a, extent, c);
	if ( *c == 0 ) cout << "a^e = " << pow(a, extent, c) << endl;
		else cout << "a^e = Error (1/0): it can not be divided by zero" << endl;
	sq(a,c);
	if ( *c == 0 ) cout << "sqrt(a) = " << sq(a,c) << endl;
		else cout << "sqrt(a) = Error: root of a negative number does not exist!" << endl;
	
	cout << endl << "Press any button to exit the program" << endl;

	_getch();
	return 0;
}
double sum ( float a,  float b)
{
	return a + b;
}
double sub ( float a,  float b)
{
	return a - b;
}
double mult ( float a,  float b)
{
	if ( a != 0 && b != 0 ) return a * b;
		else if ( a == 0 || b == 0 ) return 0;
}
double div ( float a,  float b, int* c)
{
	if ( a != 0 && b != 0  ) return (float)a/b;
		else if ( a == 0 ) return 0;
		else *c = 1;
}
double pow ( float a, int* extent,  int* c)
{
	float a2 = a;
	
	if ( a != 0 )
	{
		*c = 0;
		if ( *extent < 0 )
	{
		for (unsigned int i = 1; i < -*extent; ++i)
		{
			a = a * a2;
		}
		a = (float)1 / a;
	}
	    else if ( *extent > 0 ) 
	    {
			for (unsigned int i = 1; i < *extent; ++i)
		    {
			a = a * a2;
		    }
	    }
		else a = 1.0;
	
	return (double) a;
	}
	else if ( a == 0 && *extent < 0 ) *c = 1;
	else if ( a == 0 && *extent > 0 ) return 0;
	else if ( a == 0 && *extent == 0 ) return 1;
	
}
double sq ( float a, int* c )
{
	float xn = 1.0;  
	float xn1 = 2.0;
	
	if ( a >= 0 )
	{
		*c = 0;
		if ( a != 1 && a != 0 )
	{
		while ( (xn1 - xn) > 0.000001 || (xn1 - xn) < -0.000001  )
		{
		 xn = xn1;
		 xn1 = (float)(xn + (float)a/xn)/2;
		}

	}
		else if ( a == 1 ) xn1 = 1;
			else if ( a == 0 ) xn1 = 0;
				return xn1;
	}
	
	else *c = 1;
	
}
