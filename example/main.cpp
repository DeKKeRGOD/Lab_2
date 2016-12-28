#include <iostream>

#include "calculator.hpp"
using namespace std;

int main()
{
    	float a = 0.0;
	float b = 0.0;
	int* c = (int*)malloc(sizeof(int));
	int* extent = (int*)malloc(sizeof(int));
	*c = 0;
	*extent = 0;
	cin >> a;
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

	return 0;
}
