#include <iostream>
#include "calculator.hpp"

using namespace std;

int main()
{
    	float a = 3;
	float b = 2;
	int* c = (int*)malloc(sizeof(int));
	int* ext = (int*)malloc(sizeof(int));
	*c = 0;
	*ext = 0;
	cin >> a;
	cin >> b;
	cout << sum(a,b) << endl;
	cout << sub(a,b) << endl;
	cout << multip(a,b) << endl;
	di(a,b,c);
	if ( *c == 0 ) cout << di(a,b,c) << endl;
		else cout << "Invalid value for b" << endl;
	cout << "a^e, e = ";
	cin >> *ext;
	power(a, ext, c);
	if ( *c == 0 ) cout << power(a, ext, c) << endl;
		else cout << "Invalid value for a" << endl;
	squareroot(a,c);
	if ( *c == 0 ) cout << squareroot(a,c) << endl;
		else cout << "Invalid value for a" << endl;
	system("pause");
}
