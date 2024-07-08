// 7.�ṹ�� 
#include <iostream>
#include <string>
using namespace std;
struct student{
	int num;
	string name; 
	float score;
	student *next;  // student��ָ����� 
};

enum enum_name{s,f,g,h,u,p}; 		// ö�����ͣ�����ö�ٳ�����
 
void pointer_print(student *n);		// ����print����ԭ�� 
void reference_print(student &reference);
// linked list
int main(){
	student a,b,c;			// Node: �ṹ����Ϊ��̬����Ľڵ�
	student *head; 			// head��Ϊָ�� 
	student &reference=a;		// reference��Ϊ���� 
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
	
	pointer_print(&a);  //����student����ĵ�ַ��ָ�룩 
	pointer_print(&b);
	pointer_print(&c); 
	reference_print(reference);
	reference_print(b);
	
	
	int* p = new int[4];		// ��̬�����ڴ�ռ�
	int* pointer = new int(1234);
	delete[] p; 				// �ͷ��ڴ�ռ� 
	delete pointer;
	return 0;
}
void pointer_print(student *n){						// ��ָ�룺��С���� 
	cout<<n->name<<n->score<<endl;
}
void reference_print(student &reference){			// �����ã���С�������׶� 
	cout << reference.name << reference.score << endl; 
}

