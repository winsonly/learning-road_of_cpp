/*#include <iostream>
using namespace std;
class Time{
	private:
		int year;
		int month;
		int day;
		int hour;
	public:
		Time();					// 构造方法的重载 （建立对象时自动调用） 
		Time (int y,int m,int d,int h); 
		~Time();				// 析构函数 (撤销对象时自动调用)
		
		void showYear()const;
		void setYear(int y); 
};
Time::Time(){					// 构造方法 
	year = 2024;
	month = 7;
	day = 8;
	hour = 12;
}
Time::Time(int y,int m,int d,int h){		// 含参构造方法 
	year = y;
	month = m;
	day = d;
	hour = h; 
}
Time::~Time(){
	cout << "this object has finished."<<endl;
}
void Time::setYear(int y){				// this指针 
	this->year = y;
}
void Time::showYear()const{
	cout << this->year;
}


/*int main(){
	int* p = new int[4];
	delete[] p;
	int y=2023;
	Time t2;
	Time t1(2024,7,8,12);
	Time* object_pointer = new Time; 
	delete object_pointer;
	void(Time::*p1)() = &Time::showYear; 		// 指向Time对象成员函数的指针 
	t1.showYear();
	t1.setYear(y);
	t1.showYear();
	t2.showYear();
	return 0;
}
int main(){
	const Time t2(1,2,3,3);
	Time* t1 = new Time;
	(*t1).setYear(3333);
	t1->showYear();
	delete t1;
	t2.showYear();
	return 0;
}*/

// 常对象 
/*#include <iostream>
#include <string>
using namespace std;
class Time{
	private:
		// const int year;
		int year;
		int month;
		mutable int day;
		static int minute;
	public:
		static int hour;
		static void getMinute(){					//static函数只能调用static数据成员（static函数没有对象的this指针） 
			cout << minute << endl;
		} 
		Time(int y);
		~Time();
		Time(const Time& t);
		int getYear()const;
		int getMonth();
		int getDay();
		// void setYear(int y);
		void Try(int& n);		   // 测试对象的成员函数实参->形参的传递方式 
		void setMonth(int m);
		void setDay(int d);

};
Time::Time(int y):year(y){			// 常数据成员只能用构造函数的参数初始化表进行赋值 
	month = 0;
	day = 0;
}
Time::~Time(){
	static int i = 0;
	i++;
	cout << "this object " << i << " has finished." << endl;
}
int Time::getYear()const{
	return year;
}
int Time::getDay(){
	return day;
}
int Time::getMonth(){
	return month;
}
void Time::setDay(int d){
	this->day = d;
}
void Time::setMonth(int m){
	this->month = m;
}
void Time::Try(int& n){
	cout << &n << endl;
}
Time::Time(const Time& t){
	year = t.year;
	month = t.month;
	day = t.day;
}
int Time::hour = 10;			// static成员不能用参数初始化表，只能在类体外初始化 
int Time::minute = 9;
//void Time::setYear(int y){
//	this->year = y;
//}
int main(){
	Time t1(3); 					// 静态建立对象 
	const Time t2(9);
	Time t3(t1);
	Time t4=t3;
	Time t5(10);
	t5 = t3;
	Time* pt = new Time(5);		// 动态建立对象 
	Time* const p1 = &t1;			// const指针指向t1，之后不变 
	const Time* p2 = &t2;			// 将const Time看作是一种类型 ：const Time型指针指向t2; 
	cout << t1.getYear() << endl;
	delete pt;
	cout << &t3 << " and " << &t1 << " and " << &t4 <<" and "<<&t5<< endl;
	int n = 0;
	cout << &n << endl;
	t1.Try(n);
	cout << Time::hour << endl; 
	Time::getMinute(); 
	return 0;
}*/


#include <iostream>
using namespace std;
template <class numtype>				// 类模板 
class Compare{
	private:
		numtype a;
		numtype b;
	public:
		Compare(numtype c,numtype d){
			a=c;
			b=d;
		}
		numtype max(){
			return a>b?a:b;
		}
		numtype min(){
			return (a<b)?a:b;
		}
		numtype sum(); 
}; 
template <class numtype>
numtype Compare<numtype>::sum(){
	return a+b;
}
 int main(){
 	int a=3,b=7;
 	Compare<int> compare(a,b);
 	cout << compare.max()<<endl;
 	cout<<compare.min()<<endl;
 	cout<<compare.sum();
 	return 0;
 }
