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
}

void Time::set_time(int hour, int miniute, int second)
{
	this->hour = hour;
	this->miniute = miniute;
	this->second = second;
}
int main()
{
	Time *time = new Time();
	time->set_time(10,20,30);
	cout << "hour:"<<time->hour<<" ";
	cout << "miniute:"<<time->miniute<<" ";
	cout << "second:"<<time->second<<" ";
	cout << "\n";

	Time *time1 = new Time(20,30,40);

	cout << "hour:"<<time1->hour<<" ";
	cout << "miniute:"<<time1->miniute<<" ";
	cout << "second:"<<time1->second<<" ";
	cout << "\n"

	Time time2(30,40,50);

	cout << "hour:"<<time2.hour<<" ";
	cout << "miniute:"<<time2.miniute<<" ";
	cout << "second:"<<time2.second<<" ";
	cout << "\n";
}
