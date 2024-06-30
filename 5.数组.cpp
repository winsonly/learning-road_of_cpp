// 5.数组 （array）
		// 5.1 一维数组
/*#include <iostream> 
using namespace std;
int main()
{
	int i,a[10],b[5]={1,2,3,4};				// 定义一个整形数组a，长度为10 ;整型数组b，并初始化 
	for (i=0;i<=9;i++) a[i] = i;			// 依次将i值赋予数组中的元素
	for (i=9;i>=0;i--) printf("%d\t",a[i]);
	i = 0;
	while (i<=4)
	{
		printf("%d\n",b[i]);
		i++;								// 定义一个计数器 
	}
	
	return 0;
}*/


		// 5.2二维数组
/*#include <iostream>
using namespace std;
int main()
{
	int a[3][4]={{1,2,3,4},{1,2,3},{0,1,2}};		// 二维数组初始化 
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%4d",a[i][j]);
			}
		cout << endl;
		}
	return 0;
   }*/

		// 5.3字符数组
/*#include <iostream>
using namespace std;
int main()
{
	int i;
	char a[]={'a',' ','b'};
	char c[5]="i am";
	for (i=0;i<3;i++)
		printf("%c",a[i]);
	return 0;
	}  */ 
	
			// 字符串处理函数
#include <iostream>				// 5.3.1 strcat:字符连接函数 
#include <cstring>
using namespace std;
/*int main()
{
	
	char str1[50] = "people of ";  
	char str2[] = "china is the best";  
	strcat(str1, str2); // 连接 str2 到 str1 的末尾  
	cout << str1; // 直接输出 str1，此时它包含了连接后的字符串  
	return 0;
 } */
 
 							// 5.3.2 strcpy:字符串连接函数
/* int main()
 {
 	char a[20]="vhsjvn";
 	char b[]="vdjsvvsvabb";
 	strcpy(a,b);
 	cout << a;
 	return 0;
 }*/


							// 5.3.3 strcmp:字符转比较函数
/*int main()
{ 
	int res;
 	char a[20]="vhsjvn";
 	char b[]="vdjsvvsvabb";
	res = strcmp(a,b);
	cout << res;
	return 0;
 } */
 
 
							// 5.3.4 strlen:字符串长度函数
/*int main()
{
	int len;
	char a[]="fjdnjn dvjn ds";
	len = strlen(a);
	cout << len;
	return 0;
  }*/
  
   		// 5.4 字符串变量 && 字符串类
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1="winsonly";					// 字符串变量
	string a[]={"hsac","cjdsvn","cmdlm"} 	//字符串数组 
	string new_str;
	new_str = a[0]+a[1];					// 字符串运算 
	cout << new_str; 
	return 0;
 } 
