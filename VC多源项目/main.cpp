#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//��������
	void printfStars();            /*����ֻ������һ��
								   �������Ͳ���ֵ
								   */
	int sum(int x, int y);
	int Maxnumber(int n, int a[]);
	
	int a = 3, b = 2;
	int s, n, c[10];
	int max;
	//����1
	printfStars();//ʹ�ô�ӡ�ĺ���
	//����2
	s = sum(a, b);//ʹ�üӵĺ���
	printf("input the length : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf_s("%d", &c[i]);
	}
	//����3
	max = Maxnumber(n, c);//ʹ����һ������ȡ������ĺ���
	printf("a+b=%d\nmaxnumber=%d\n", s, max);
	return 0;
}