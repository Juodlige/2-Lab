#include "stdafx.h"
#include <iostream>
using namespace std;
int B[1000] = {};
int F(int n)//greita rekursija
{
	if (n == 1)
	{
		B[n] = 1;
		return 1;
	}
	else if (n == 2)
	{
		B[n] = 1;
		return 1;
	}
	else if (n == 3)
	{
		B[n] = 2;
		return 2;
	}
	else
	{
		if (B[n - 1] != 0 && B[n - 3] != 0)
		{
			B[n] = B[n - 1] + B[n - 3];
			return B[n];
		}
		return F(n - 1) + F(n - 3);
	}
}

int f(int n)//paprasta rekursija
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else if (n == 3)
		return 2;
	else
		return f(n - 1) + f(n - 3);
}

int main()
{
	//f(N)=f(N-1)+f(N-3)
	//f(1)=1
	//f(2)=1
	//f(3)=2

	int A[1000];
	A[1] = 1;
	A[2] = 1;
	A[3] = 2;
	int n;
	cin >> n;
	for (int i = 4; i <= n; i++)
	{
		A[i] = A[i - 1] + A[i - 3];
	}
	cout << A[n] << endl;
	cout << F(n) << endl;
	cout << f(n) << endl;
}