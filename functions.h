#include <cmath>
#include <iostream>
using namespace std;

int measure(int a,int b)						// ������������� 
{
	int c,res;
	if (a%b == 0) res = b;
	else {
		c = a%b;
		a = b;
		b = c;
		res = measure(a,b); 
	}
	return res;
}

int min_num(int a,int b)						// ����С�������ĺ��� 
{
	int measure(int a,int b);
	int num,Measure;
	Measure = measure(a,b);
	num = a*b/Measure;
	return num;
 } 
 
 
int max(int x, int y)							// �����ֵ 
{
	return x>y?x:y;
}

static int func(int a,int b)					// ��̬�������ڲ������� 
{
	return (a+b);
}

void equation_1(double a,double b,double c)		//b*b-4*a*c > 0 ��� 
{
	double x1,x2;
	x1 = (-b)/(2*a)+sqrt(b*b-4*a*c)/(2*a);
	x2 = (-b)/(2*a)-sqrt(b*b-4*a*c)/(2*a);
	cout << x1 << x2 << endl;
	
 } 
 
void equation_2(double a,double b,double c)		// b*b-4*a*c < 0 ����� 
{
	double x;
	x = (-b)/(2*a);
	cout << x << endl;
}

void equation_3(double a,double b,double c)		//b*b-4*a*c < 0 ����� 
{
	printf("��ʵ��"); 
 } 
