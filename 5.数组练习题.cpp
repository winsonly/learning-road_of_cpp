// 数组解决 Fibonacci 问题 
/*#include <iostream>
using namespace std;
int main()
{
	int i,f[20]={1,1};
	for (i=2;i<20;i++)
		f[i] = f[i-1]+f[i-2];
	for (i=0;i<20;i++)
	{
	 if((i)%5==0) cout << endl; 
	printf("%8d",f[i]);
	}
	
	return 0;
}*/



// 起泡法对数字进行排序
#include <iostream>
using namespace std;
int main()
{
	 int i,j,t,a[11];
	 for (i=1;i<=10;i++) scanf("%d",&a[i]);
	 for (i=1;i<=5;i++)
	 	for (j=1;j<=(10-i);j++) 
	 		if (a[i]>a[i+1]) 
	 		{
	 			t = a[j];
	 			a[j] = a[j+1];
	 			a[j+i] = t;
			 }
	for (i=1;i<=10;i++)
		printf("%d ",a[i]);
	
	return 0; 	
} 
