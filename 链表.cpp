#include <iostream>
#include <string>
using namespace std;
struct Student{
	string name;
	int age;
	Student* next;
};
int main(){
	Student* head,* p_prev,* p_next;
	int n;
	cin>>n;
	p_prev = new Student;
	head = 	p_prev;	
	cout<<head<<endl;	// 动态分配内存给节点 ,创建链表 ：两个指针建立链表 
	for (int i=0;i<n;i++){
		p_next = new Student;
		cout<<"age and name :";
		cin>>p_next->age>>p_next->name;
		 p_prev->next = p_next;
		 p_prev = p_next;
	}
	p_next->next = NULL;
	
 
	p_next = head->next;					// 一个指针读取链表的数据 
	do{
		cout<<"age:"<<p_next->age<<' '<<"name: "<<p_next->name<<endl;
		p_next = p_next->next;
	} while(p_next!=NULL);
	
	p_next = new Student;				// 插入节点（两步走）：新节点指向下一节点，后节点指向新节点 （双指针完成） 
	cout<<"age and name :";
	cin>>p_next->age>>p_next->name;
	p_next->next = head->next;
	head->next = p_next;
	
	
	p_next->next = head->next; // 刷新指针 
	head = p_next->next;			// 删除节点（两步走）：后节点指向前一节点 ，释放P_next所指的内存空间 
	delete p_next;
	
	return 0;
}


