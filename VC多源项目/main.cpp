#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//函数申明
	void printfStars();            /*这里只是声明一下
								   函数名和参数值
								   */
	int sum(int x, int y);
	int Maxnumber(int n, int a[]);
	
	int a = 3, b = 2;
	int s, n, c[10];
	int max;
	//调用1
	printfStars();//使用打印的函数
	//调用2
	s = sum(a, b);//使用加的函数
	printf("input the length : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf_s("%d", &c[i]);
	}
	//调用3
	max = Maxnumber(n, c);//使用在一组数中取最大数的函数
	printf("a+b=%d\nmaxnumber=%d\n", s, max);
	return 0;
}