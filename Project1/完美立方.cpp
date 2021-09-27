#include	<iostream>
#include	<cstdio>
using namespace std;

int 完美立方()
{
	int N = 0;
	cin >> N;
	for (int a = 2; a <= N; ++a)
		for (int b = 2; b < a; ++b)
			for (int c = b; c < a; ++c)
				for (int d = c; d < a; ++d)
					if (a * a * a == b * b * b + c * c * c + d * d * d)
						cout << "Cube = " << a << "," << "Triple = " 
						<< "(" << b << "," << c << "," << d << ")" << endl;

	return 0;
}