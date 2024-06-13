#include<stdio.h>
#include<iomanip>
#include <iostream>
using namespace std ;
int main()
{
	int i ;
	double k ;
	double a , b , c , d , e ; 
	d = 4.00 / 3.00 ;
	e = 8.00 / 3.00 ;
	for ( i = 0 ; i <=  11 ; i++ ) 
	{
		if ( i == 0 )
		{
		 k = 1.00 ;
		 cout <<  i  << " : " <<  k << endl ;
		 a = k ;
		}
		else if ( i == 1 )
		{
			k = k + 1 ;
			cout <<  i  << " : " <<  k << endl ;
			b = k ;
		}
		else 
		{
			if ( i % 2 == 0 && i != 1)
			{
				c = d * b - e * a ;
				a = c ;
				cout <<  i  << " : " <<  c << endl ;
			}
			else 
			{
				c = d * a - e * b ;
				b = c ;
				cout <<  i  << " : "  <<  c << endl ;
			}
		}
	}
	cout << d << e ;
return (0);
}
