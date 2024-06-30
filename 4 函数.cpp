  // 4.函数
/*#include <iostream>
using namespace std; 
int main()		//从4个整数中找最大值 
{
	int Max_4(int a,int b,int c,int d);
	int a, b, c, d, Max;
	cin >> a >> b >> c >> d;
	Max =  Max_4(a,b,c,d);
	printf("%d",Max);
	return Max;
   }   

int Max_4(int a,int b,int c,int d)
{
	int max(int x,int y);
	int m;
	m = max(a,b);
	m = max(m,c);
	m = max(m,d);
	return m;
	
}

int max(int x,int y)
{
	return x>y?x:y;
}*/

/*#include <iostream>  //通过递归函数求年龄 
using namespace std;
int age(int n);
int main()
{
	int n;
	cin >> n;
	cout << age(n) << endl;
	
	return 0;
}

int age(int n)
{
	int res;
	if (n == 1) res = 10;
	else res = age(n-1)+2;
	return res;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int fuc(int n);
	int n;
	cin >> n;
	cout << fuc(n) << endl;
	
	return 0;
 } 
int fuc(int n)
{
	int res;
	if (n == 1) res = 1;
	else res = fuc(n-1)*n;
	return res;
}*/


/*





//函数模板
#include <iostream>
using namespace std;

template <typename T>  //模板函数不能在程序块里声明 
T func(T a,T b,T c);

int main()
{

	int a,b,c,max;
	cin >> a >> b >>c;
	max = func(a,b,c);		//参数类型自动传入形式类型T中 
	cout << max << endl;
	
	return 0;
}

template <typename T>
T func(T a,T b,T c)
{
	T res;
	res = a>b?a:b;
	res = res>c?res:c;
	return res;
 } 
 */
 
 
 
 
 //函数的属性：存储期类别 
		//1.auto声明变量 ：动态存储 
/*#include<iostream>
using namespace std;
int main()
{
	auto int a=1, b=2;			//auto可省略 
	cout << a << b << endl; 
	
	return 0;
 } */
 
 
 		//2. static声明变量： 静态存储
/*#include <iostream>			//计算n!的值 
using namespace std;
int main()
{
	int fac(int n);
	int a;
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
		printf("%d",fac(i));
	
	return 0;
 } 
int fac(int n)
{
	static int res=1;
	res = res*n;
	return res;
}*/


		//3.register声明变量：存储在cpu的寄存器中（频繁使用的变量） （静态||动态） 
/*#include <iostream>
using namespace std;
int main()
{
	int fac(int);
	int a;
	scanf("%d",&a);
	printf("%d",fac(a));
	return 0;
 } 

int fac(int n)
{
	register int i,f=1;
	for (i=1;i<=n;i++){		//i && f被频繁调用 
		f = f*i;
	}
	return f; 
}*/

		//4.extern声明变量： 静态存储 (扩展已定义变量的作用域)
/*#include <iostream> 
using namespace std;
int main()
{
	extern int a,b;
	cout << a << b << endl;
	
	return 0;
}
int a=1,b=2;*/




//内部函数 && 外部函数
		//内部函数（静态函数） ：只能在本文件中被调用 
/*#include <iostream>
using namespace std;
static int func(int x,int y);		//被声明为静态的函数不能在程序块中声明 
int main()
{

	int x=1,y=2;
	cout << func(x,y) << endl;
	
	return 0;
 } 

static int func(int a,int b)
{

	return (a+b);
}*/

	//外部函数：可以被其他文件调用
/*#include <iostream>			// #include指令包含所有函数原型 ，将源文件的所有外部函数的作用域都扩大到该文件（函数原型的声明本质就是函数作用域的扩展） 
using namespace std; 
int main ()
{
	extern void f(void);		//声明函数原型：扩大函数作用域 == void f(void); 
	f();
	cout << endl;
	return 0;
}

void f(void)
{
	cout <<666;
}*/




//头文件
#include <iostream>
#include "functions.h"
using namespace std;
int main()
{
	int measure(int a,int b);
	int a=24,b=18,Measure;
	Measure = measure(a,b);
	printf("%d",Measure);
	return 0;
}

 

