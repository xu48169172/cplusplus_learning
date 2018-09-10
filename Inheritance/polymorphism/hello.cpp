#include <iostream>
#include "hello.h"

using namespace std;
Time::Time():hour(0),miniute(0),second(0)
{
}

Time::Time(int m_hour, int m_miniute, int m_second):
	hour(m_hour),miniute(m_miniute),second(m_second)
{
}

void Time::set_time(int hour, int miniute, int second)
{
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
}

void Time::show_time()
{
	cout << "hour:"<<this->hour<<" ";
	cout << "miniute:"<<this->miniute<<" ";
	cout << "second:"<<this->second<<" ";
	cout << "\n";
}
Realtime::Realtime():Time()
{
	day = 0;
}
Realtime::Realtime(int m_day, int m_hour, int m_miniute, int m_second):Time(m_hour,m_miniute,m_second)
{
	day = m_day;
}
void Realtime::show_time()
{
	cout<<"day:"<<this->day<<" ";
	// 派生类对象包含基类对象，派生类对象可以执行基类对象可以执行的方法。
	Time::show_time();
}
int main()
{
	Time time(30,40,50);
	Realtime realtime(3,10,20,30);
	// 引用变量只能在初始化过程赋值 
	Time& rtime = time;
	rtime.show_time();
	// 引用变量只能在声明时赋值，一旦赋值就一直跟随
	Time& rtime1 = realtime;
	rtime1.show_time();
}
