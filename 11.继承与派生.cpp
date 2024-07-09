#include <iostream>
#include <string>
using namespace std;
class Student{							// 父类 
	protected:
		string name;
		int age;
	public:
		Student(string name,int age){
			this->age = age;
			this->name = name;
		};
		~Student(){
			cout<<"this Student object has finished"<<endl;
		}
		string getName(){
			return name;
		}
		void setName(string name){
			this->name = name;
		}
		int getAge(){
			return age;
		}
		void setAge(int age){
			this->age = age;
		}
		
};
class Student_1:public Student{				//子类1 
	
	protected:
		string sex;
		Student monitor;
		static int count;
		
	public:
		friend int Getage(Student_1& s);
		Student_1(string name,int age,string monitor_name,int monitor_age,string sex):Student(name,age),monitor(monitor_name,monitor_age){
			this->sex = sex;
			count++;
		}
		~Student_1(){
			// i ++;
			cout<<"this Student_1 object has finished"<<endl;
		}
		void setSex(string);
		string getSex(); 
		Student getMonitor();
		static int getCount(){
			return count;
		}
		
};
class Student_2:public Student{				// 子类2 
	
	protected:
		string statu;
		Student monitor;
	
	public:
		
		Student_2(string name,int age,string monitor_name,int monitor_age,string statu):Student(name,age),monitor(monitor_name,monitor_age){
			this->statu = statu;
			
		}
		~Student_2(){
			// i ++;
			cout<<"this Student_1 object has finished"<<endl;
		}
		void setStatu(string);
		string getStatu(); 
		Student getMonitor();
};
void Student_2::setStatu(string statu){
	this->statu = statu;
}
string Student_2::getStatu(){
	return this->statu; 
}

Student Student_2::getMonitor(){
	return monitor;
}

int Student_1::count = 0;
int Getage(Student_1& s){
	return s.age;
}
Student Student_1::getMonitor(){
	return monitor;
}
void Student_1::setSex(string sex){
	this->sex = sex;
}
string Student_1::getSex(){
	return this->sex; 
}





int main(){
	string name = "li hua",monitor_name="li si";
	string sex="male";
	int age=19,monitor_age=20;
	Student_1 student1(name,age,monitor_name,monitor_age,sex);
	// Student_1* student1 = new Student("li hua",18,"li si",20,"male")
	cout<<Getage(student1)<<endl;
	cout<<student1.getMonitor().getName()<<endl;
	cout<<"the total student_1 objects are "<< Student_1::getCount()<<endl; 
	// delete student1;
	
	Student student2 = student1;
	Student& reference_student = student1;
	int na = reference_student.getAge();
	cout<<na<<endl;
	
	return 0;
}

