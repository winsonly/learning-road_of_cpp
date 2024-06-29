//1.4¿ØÖÆÁ÷

//1.4.1 whileÓï¾ä
/*
#include <iostream>
int main()
{
	
	int val = 50, sum = 0;
	while (val <= 100){
		sum += val;
		++val;		//Ç°×ºµİÔöÔËËã·û++ 
	}
	std::cout << sum << std::endl;
	
	
	
	int val = 10;
	while (val <=10 and val >= 0) {
		std::cout << val << std::endl;
		--val;
	}
	
	
	int val1, val2;
	std::cin >> val1 >> val2;
	std::cout << val1 << val2 << std::endl;
	while (val1 >= val2)
	{
		std::cout << val1 << std::endl;
		--val1;
	}
	return 0;
	
} 
*/

// 1.4.2 forÓï¾ä and 1.4.3---
/*
#include <iostream>
int main()
{
	int sum = 0,val = 0;
	while (std::cin >> val)
	{
		sum += val;
	}
	std::cout << sum;
	return 0;
	
}*/

//1.4.4 ifÓï¾ä
#include <iostream>
using namespace std;
int main()
{
	char grade = 'A';
	switch (grade)
	{
		case 'A':cout << "85-100\n" << endl;
		case 'b':cout << "ghuiwsh\n" << endl;
		case 'a':cout << "hjfsdiuhv\n" <<endl;
		default :cout << "no way";
	} 
	
	return 0;
 } 
