#include <iostream>
#include "hello.h"

using namespace std;
/*
Time::Time()
{
	hour = 0;
	miniute = 0;
	second = 0;
}
*/
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

Time::Time(int m_hour)
{
	hour = m_hour;
	miniute = 0 ;
	second = 0;
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
/*
Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.hour = hour + t.hour;
	sum.miniute = miniute + t.miniute;
	sum.second = second + t.second;
	return sum;
}
Time Time::operator-(const Time& t) const
{
	Time sum;
	sum.hour = hour - t.hour;
	sum.miniute = miniute - t.miniute;
	sum.second = second - t.second;
	return sum;
}
Time Time::operator*(const int t) const
{
	Time sum;
	sum.hour = hour * t;
	sum.miniute = miniute * t;
	sum.second = second * t;
	return sum;
}
// 注意这个函数，这个函数没有定义返回类型，但是却要return 值
// 并且不会编译warning。
Time::operator int()
{
	return hour * 600 + miniute * 60 + second;
}
Time operator*(const int t, const Time& time)
{
	Time sum;
	sum.hour = time.hour * t;
	sum.miniute = time.miniute * t;
	sum.second = time.second * t;
	return sum;
}

ostream&  operator<<(ostream& os,Time& t)
{
	os << "hour: " << t.hour << " miniute: " << t.miniute << " second: " <<
		t.second << endl;
	return os;
}
*/
int main()
{
	Time time;
	time = Time(20);
}
