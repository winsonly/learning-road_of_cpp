  // ����
/*#include <iostream>
using namespace std; 
int main()		//��4�������������ֵ 
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

/*#include <iostream>  //ͨ���ݹ麯�������� 
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





//����ģ��
#include <iostream>
using namespace std;

template <typename T>  //ģ�庯�������ڳ���������� 
T func(T a,T b,T c);

int main()
{

	int a,b,c,max;
	cin >> a >> b >>c;
	max = func(a,b,c);		//���������Զ�������ʽ����T�� 
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
 
 
 
 
 //���������ԣ��洢����� 
		//1.auto�������� ����̬�洢 
/*#include<iostream>
using namespace std;
int main()
{
	auto int a=1, b=2;			//auto��ʡ�� 
	cout << a << b << endl; 
	
	return 0;
 } */
 
 
 		//2. static���������� ��̬�洢
/*#include <iostream>			//����n!��ֵ 
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


		//3.register�����������洢��cpu�ļĴ����У�Ƶ��ʹ�õı����� ����̬||��̬�� 
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
	for (i=1;i<=n;i++){		//i && f��Ƶ������ 
		f = f*i;
	}
	return f; 
}*/

		//4.extern���������� ��̬�洢 (��չ�Ѷ��������������)
/*#include <iostream> 
using namespace std;
int main()
{
	extern int a,b;
	cout << a << b << endl;
	
	return 0;
}
int a=1,b=2;*/




//�ڲ����� && �ⲿ����
		//�ڲ���������̬������ ��ֻ���ڱ��ļ��б����� 
/*#include <iostream>
using namespace std;
static int func(int x,int y);		//������Ϊ��̬�ĺ��������ڳ���������� 
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

	//�ⲿ���������Ա������ļ�����
/*#include <iostream>			// #includeָ��������к���ԭ�� ����Դ�ļ��������ⲿ���������������󵽸��ļ�������ԭ�͵��������ʾ��Ǻ������������չ�� 
using namespace std; 
int main ()
{
	extern void f(void);		//��������ԭ�ͣ������������� == void f(void); 
	f();
	cout << endl;
	return 0;
}

void f(void)
{
	cout <<666;
}*/




//ͷ�ļ�
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

 

