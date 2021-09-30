#include<memory>
#include<cstring>
#include<iostream>
using namespace std;
int i = 0;
void SetBit(char& c, int i, int v)
{
	if (v)
		c |= (1 << i);
	else
		c &= ~(1 << i);
}
int 锁()
{
	char R[30] = {};
	cin >> R;
	for(int j = 0; j<31;i++)
		SetBit( i, j, R[i])
}