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
void Realtime::show_realtime()
{
	cout<<"day:"<<this->day<<" "<<endl;
	// 派生类对象包含基类对象，派生类对象可以执行基类对象可以执行的方法。
	this->show_time();
}
int main()
{
	Realtime realtime(3,10,20,30);
	realtime.show_realtime();
/*
	Realtime realtime1;
	realtime1.show_realtime();
*/
	// 基类引用可以指向派生类对象
	Time & time = realtime;
	time.show_time();

	// 基类指针可以指向派生类对象
	Time *time1 = new Time(40,50,60);
	time1->show_time();
}
