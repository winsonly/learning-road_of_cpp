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
	cout<<head<<endl;	// ��̬�����ڴ���ڵ� ,�������� ������ָ�뽨������ 
	for (int i=0;i<n;i++){
		p_next = new Student;
		cout<<"age and name :";
		cin>>p_next->age>>p_next->name;
		 p_prev->next = p_next;
		 p_prev = p_next;
	}
	p_next->next = NULL;
	
 
	p_next = head->next;					// һ��ָ���ȡ��������� 
	do{
		cout<<"age:"<<p_next->age<<' '<<"name: "<<p_next->name<<endl;
		p_next = p_next->next;
	} while(p_next!=NULL);
	
	p_next = new Student;				// ����ڵ㣨�����ߣ����½ڵ�ָ����һ�ڵ㣬��ڵ�ָ���½ڵ� ��˫ָ����ɣ� 
	cout<<"age and name :";
	cin>>p_next->age>>p_next->name;
	p_next->next = head->next;
	head->next = p_next;
	
	
	p_next->next = head->next; // ˢ��ָ�� 
	head = p_next->next;			// ɾ���ڵ㣨�����ߣ�����ڵ�ָ��ǰһ�ڵ� ���ͷ�P_next��ָ���ڴ�ռ� 
	delete p_next;
	
	return 0;
}


