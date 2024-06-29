// 最大公因数 && 最小公倍数 
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,Measure,num;
	int min_num(int a,int b);
	int measure(int a,int b);
	cin >> x >> y;
	Measure = measure(x,y);
	num = min_num(x,y);
	cout << Measure << ' ' <<num  << endl;
	
	return 0;
}

int measure(int a,int b)		// 求最大公因数函数 
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

int min_num(int a,int b)		// 求最小公倍数的函数 
{
	int measure(int a,int b);
	int num,Measure;
	Measure = measure(a,b);
	num = a*b/Measure;
	return num;
 } */
 
 
 
// 一元二次方程的根 
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	void equation_1(double a,double b,double c);
	void equation_2(double a,double b,double c);
	void equation_3(double a,double b,double c);
	int a,b,c,de;
	cin >> a >> b >> c;
	de = b*b-4*a*c;
	if (de > 0) equation_1(a,b,c);
	else if (de == 0) equation_2(a,b,c);
	else equation_3(a,b,c);
	return 0;
 } 
void equation_1(double a,double b,double c)		//b*b-4*a*c > 0 情况 
{
	double x1,x2;
	x1 = (-b)/(2*a)+sqrt(b*b-4*a*c)/(2*a);
	x2 = (-b)/(2*a)-sqrt(b*b-4*a*c)/(2*a);
	cout << x1 << x2 << endl;
	
 } 
 
void equation_2(double a,double b,double c)		// b*b-4*a*c == 0 的情况 
{
	double x;
	x = (-b)/(2*a);
	cout << x << endl;
}

void equation_3(double a,double b,double c)		//b*b-4*a*c < 0 的情况 
{
	printf("无实根"); 
 } 
 */
 
 
 
 // 素数问题
#include <iostream>
using namespace std;
int main()
{
	bool is_prime(int n);
	int n;bool b;
	scanf("%d",&n);
	b = is_prime(n);
	cout << b << endl;
	return 0;
 } 

bool is_prime(int n)
{
	int i;bool res=true;
	for (i=2;i<n;i++)
	{
		if (n%i == 0)
		{
			res = false;
			break;
		}
		else res = true;
		printf("%d",res);
	}
	return res;
}
