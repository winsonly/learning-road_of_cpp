// 5.���� ��array��
		// 5.1 һά����
/*#include <iostream> 
using namespace std;
int main()
{
	int i,a[10],b[5]={1,2,3,4};				// ����һ����������a������Ϊ10 ;��������b������ʼ�� 
	for (i=0;i<=9;i++) a[i] = i;			// ���ν�iֵ���������е�Ԫ��
	for (i=9;i>=0;i--) printf("%d\t",a[i]);
	i = 0;
	while (i<=4)
	{
		printf("%d\n",b[i]);
		i++;								// ����һ�������� 
	}
	
	return 0;
}*/


		// 5.2��ά����
/*#include <iostream>
using namespace std;
int main()
{
	int a[3][4]={{1,2,3,4},{1,2,3},{0,1,2}};		// ��ά�����ʼ�� 
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

		// 5.3�ַ�����
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
	
			// �ַ���������
#include <iostream>				// 5.3.1 strcat:�ַ����Ӻ��� 
#include <cstring>
using namespace std;
/*int main()
{
	
	char str1[50] = "people of ";  
	char str2[] = "china is the best";  
	strcat(str1, str2); // ���� str2 �� str1 ��ĩβ  
	cout << str1; // ֱ����� str1����ʱ�����������Ӻ���ַ���  
	return 0;
 } */
 
 							// 5.3.2 strcpy:�ַ������Ӻ���
/* int main()
 {
 	char a[20]="vhsjvn";
 	char b[]="vdjsvvsvabb";
 	strcpy(a,b);
 	cout << a;
 	return 0;
 }*/


							// 5.3.3 strcmp:�ַ�ת�ȽϺ���
/*int main()
{ 
	int res;
 	char a[20]="vhsjvn";
 	char b[]="vdjsvvsvabb";
	res = strcmp(a,b);
	cout << res;
	return 0;
 } */
 
 
							// 5.3.4 strlen:�ַ������Ⱥ���
/*int main()
{
	int len;
	char a[]="fjdnjn dvjn ds";
	len = strlen(a);
	cout << len;
	return 0;
  }*/
  
   		// 5.4 �ַ������� && �ַ�����
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1="winsonly";					// �ַ�������
	string a[]={"hsac","cjdsvn","cmdlm"} 	//�ַ������� 
	string new_str;
	new_str = a[0]+a[1];					// �ַ������� 
	cout << new_str; 
	return 0;
 } 
