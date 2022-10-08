#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Maxnumber(int n, int a[]) 
{
	int max = 0;
	for (int i = 1; i < n; i++) 
	{
		if (a[i] > a[max])
			max = i;
	}



	return a[max];
}