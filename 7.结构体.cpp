// 7.结构体 
#include <iostream>
#include <string>
using namespace std;
struct student{
	int num;
	string name; 
	float score;
	student *next;  // student型指针变量 
};

enum enum_name{s,f,g,h,u,p}; 		// 枚举类型（包含枚举常量）
 
void pointer_print(student *n);		// 声明print函数原型 
void reference_print(student &reference);
// linked list
int main(){
	student a,b,c;			// Node: 结构体作为静态链表的节点
	student *head; 			// head作为指针 
	student &reference=a;		// reference作为引用 
	a.num = 31001;a.score = 89.5;a.name = "li hua";
	b.num = 31003;b.score = 90;b.name = "zhang san";
	c.num = 31007;c.score = 85;c.name = "li si";
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	do{
		cout << head->num << ' ' << (*head).score <<endl;
		head = (*head).next;
	} while (head!=NULL);
	
	enum_name u =u;
	cout << u<<endl; 
	
	pointer_print(&a);  //传入student对象的地址（指针） 
	pointer_print(&b);
	pointer_print(&c); 
	reference_print(reference);
	reference_print(b);
	
	
	int* p = new int[4];		// 动态分配内存空间
	int* pointer = new int(1234);
	delete[] p; 				// 释放内存空间 
	delete pointer;
	return 0;
}
void pointer_print(student *n){						// 传指针：减小开销 
	cout<<n->name<<n->score<<endl;
}
void reference_print(student &reference){			// 传引用：减小开销、易读 
	cout << reference.name << reference.score << endl; 
}

