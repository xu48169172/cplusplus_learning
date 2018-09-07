#include <iostream>
#include "hello.h"

using namespace std;
Time::Time()
{
	hour = 0;
	miniute = 0;
	second = 0;
}

Time::Time(int m_hour, int m_miniute, int m_second)
{
	/*
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
	*/
	hour = m_hour;
	miniute =m_miniute;
	second = m_second;
	sum();
}

void Time::set_time(int hour, int miniute, int second)
{
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
	sum();
}

void Time::show_time()
{
	cout << "hour:"<<this->hour<<" ";
	cout << "miniute:"<<this->miniute<<" ";
	cout << "second:"<<this->second<<" ";
	cout << "sum:"<<this->total<<" ";
	cout << "\n";
}
int main()
{
	Time *time = new Time();
	time->set_time(10,20,30);
	time->show_time();

	Time time1(20,30,40);
	time1.show_time();
}
