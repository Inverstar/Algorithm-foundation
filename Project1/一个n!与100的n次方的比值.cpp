#include	<iostream>
#include	<cstdio>
using namespace std;
double f(int n)
{
	int k = n;
	double m = 1;
	while (n--)
		{	
			if (m > 100)
			{
				m /= 100;
				k--;
				if (k == 0) return m;
			}
			else
				m *= n + 1;
		}
	cout << k << endl;
	cout << m << endl;
	for (; k > 0; k--)
		m /= 100;
	return m;
}
int n()
{
	long long n = 0;
	cin >> n;
	cout << "f= "<<f(n) << endl;
	return 0;
}