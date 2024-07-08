/*#include <iostream>
using namespace std;
class Time{
	private:
		int year;
		int month;
		int day;
		int hour;
	public:
		Time();					// ���췽�������� ����������ʱ�Զ����ã� 
		Time (int y,int m,int d,int h); 
		~Time();				// �������� (��������ʱ�Զ�����)
		
		void showYear()const;
		void setYear(int y); 
};
Time::Time(){					// ���췽�� 
	year = 2024;
	month = 7;
	day = 8;
	hour = 12;
}
Time::Time(int y,int m,int d,int h){		// ���ι��췽�� 
	year = y;
	month = m;
	day = d;
	hour = h; 
}
Time::~Time(){
	cout << "this object has finished."<<endl;
}
void Time::setYear(int y){				// thisָ�� 
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
	void(Time::*p1)() = &Time::showYear; 		// ָ��Time�����Ա������ָ�� 
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

// ������ 
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
		static void getMinute(){					//static����ֻ�ܵ���static���ݳ�Ա��static����û�ж����thisָ�룩 
			cout << minute << endl;
		} 
		Time(int y);
		~Time();
		Time(const Time& t);
		int getYear()const;
		int getMonth();
		int getDay();
		// void setYear(int y);
		void Try(int& n);		   // ���Զ���ĳ�Ա����ʵ��->�βεĴ��ݷ�ʽ 
		void setMonth(int m);
		void setDay(int d);

};
Time::Time(int y):year(y){			// �����ݳ�Աֻ���ù��캯���Ĳ�����ʼ������и�ֵ 
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
int Time::hour = 10;			// static��Ա�����ò�����ʼ����ֻ�����������ʼ�� 
int Time::minute = 9;
//void Time::setYear(int y){
//	this->year = y;
//}
int main(){
	Time t1(3); 					// ��̬�������� 
	const Time t2(9);
	Time t3(t1);
	Time t4=t3;
	Time t5(10);
	t5 = t3;
	Time* pt = new Time(5);		// ��̬�������� 
	Time* const p1 = &t1;			// constָ��ָ��t1��֮�󲻱� 
	const Time* p2 = &t2;			// ��const Time������һ������ ��const Time��ָ��ָ��t2; 
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
template <class numtype>				// ��ģ�� 
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
