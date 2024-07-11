
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
	int x=0,y=1;
	const int m=2,n=3;							// ¶¥²ãconst 
	int* xp=&x,* yp=&y;
	const int* mp=&m,* np=&n;
	int* const xcp=&x,* const ycp=&y;
	const int* const mcp=&m,* const ncp=&n;
	int** xpp=&xp,** ypp=&yp;
	const int** mpp=&mp,** npp=&np; 			// µ×²ãconst 
	int* const* xcpp = &xcp,* const* ycpp=&ycp;
	const int* const* const mcpcp=&mcp,* const* const ncpcp=&ncp;
	cout<<x<<'='<<*xp<<'='<<*(*xpp)<<'='<<*(*xcpp)<<endl;
	cout<<*mp<<'='<<**mpp<<'='<<**mcpcp<<'='<<*mcp<<endl;
	cout<<*mpp<<'='<<mp<<endl;
	return 0;
} 
